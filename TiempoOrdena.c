#include <stdio.h>
#include <time.h>

#define Max 100000 //definimos el arreglo


void FillArray(int arreglo[Max]);
void Burbuja(int arreglo[Max]);
void AlgoBaraja(int arreglo[Max]);
void SelSort(int arreglo[Max]);


int main(){
    int arreglo[Max];
    time_t StartSeconds, EndSeconds; //tipo de dato long

    FillArray(arreglo);

//Burbuja
    StartSeconds = time(NULL);
    Burbuja(arreglo);
    EndSeconds = time(NULL);
    printf("Los segundos que se tardo Burbuja fueron: %lld\n", EndSeconds - StartSeconds);

//Baraja
    StartSeconds = time(NULL);
    AlgoBaraja(arreglo);
    EndSeconds = time(NULL);
    printf("Los segundos que se tardo Insercion fueron: %lld\n", EndSeconds - StartSeconds);

//Slection sort
    StartSeconds = time(NULL);
    SelSort(arreglo);
    EndSeconds = time(NULL);
    printf("Los segundos que se tardo Selection fueron: %lld\n", EndSeconds - StartSeconds);
}


//llena el arreglo de manera aleatoria
void FillArray(int arreglo[Max]){

    srand (time(NULL));

    for(int i = 0 ; i <Max; i++){
        arreglo[i] = rand() % 100; //entre 0 y 99
    }
}



//funcion ordenacion burbuja
void Burbuja(int arreglo[Max]){
    int i, j, aux;

    for(i = 0; i < Max-1; i++){ 
        for(j = 0; j < Max-1; j++){
            if(arreglo[j]  > arreglo[j+1]){ //verifica si un numero es mayor que el otro
                aux = arreglo[j+1];        //cambia los valores
                arreglo[j+1] = arreglo[j]; //cambia los valores
                arreglo[j] = aux;          //cambia los valores
            }
        }
    }
}


//funcion del algoritmo de insercion 
void AlgoBaraja(int arreglo[Max])
{
    int i, j;

    for(i = 1; i<Max; i++) { //posiciones 
        int numaInsertar = arreglo[i]; //guardar el numero
        j = i-1;
        while(j >= 0 && numaInsertar < arreglo[j]) {  
            arreglo[j+1] = arreglo[j]; //desplazar los numeros
            j--;    //se recorre a la izquierda
        }
        arreglo[j+1] = numaInsertar; //colocamos el numero que estabamos comparando en la posicion que corresponde
    }

}       
    


//funcion de seleccion sort
void SelSort(int arreglo[Max]){
    int i, j, min, aux;

    for(i = 0; i < Max-1; i++){
        min = i;                          //inicializamos min con el primer posicion del arreglo
        for(j = i+1; j < Max; j++){
            if(arreglo[j] < arreglo[min]){    //si el num del arreglo en j es manor que min
                min = j;                      //min guardara la posicion del dato menor
            }              
        }    
        aux = arreglo[min];              //cambiamos de posicion los valores
        arreglo[min] = arreglo[i];       //cambiamos de posicion los valores
        arreglo[i] = aux;                //cambiamos de posciion los valores
    }

}