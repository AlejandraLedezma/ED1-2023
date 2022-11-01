#include <stdio.h>
#include <time.h>

#define Max 100

void Burbuja(int arreglo[Max]);
void GenAleatorios(int arreglo[Max]);


int main(){
    int arreglo[Max] = {0, 6, 8, 348, 29, 376, 72, 387, 64, 9};
    GenAleatorios(arreglo);
    Burbuja(arreglo);


    for(int j=0; j<Max; j++){           //imprime el arreglo
       printf("%d, ",arreglo[j]);
    }

}

void GenAleatorios(int arreglo[Max]){
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
            if(arreglo[j]  < arreglo[j+1]){ //verifica si un numero es mayor que el otro
                aux = arreglo[j+1];        //cambia los valores
                arreglo[j+1] = arreglo[j]; //cambia los valores
                arreglo[j] = aux;          //cambia los valores
            }
        }
    }
}