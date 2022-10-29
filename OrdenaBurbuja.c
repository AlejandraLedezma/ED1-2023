#include <stdio.h>
#include <stdlib.h>

#define Max 10
void Burbuja(int arreglo[Max]);
void BurbujaOpti(int arreglo[Max]);


int main(){
    int arreglo[Max] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
    Burbuja(arreglo);
    BurbujaOpti(arreglo);

    for(int j=0; j<Max; j++){           //imprime el arreglo
       printf("%d, ",arreglo[j]);
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


//funcion burbuja optimizado
void BurbujaOpti(int arreglo[Max]){
    int i, j, aux, intercambios;

    for(i = 0; i < Max-1; i++){         
        intercambios = 0; 
        for(j = 0; j < Max-1; j++){
            if(arreglo[j]  > arreglo[j+1]){     //verifica si en num en la posicion j es mayor a el num en la posicion j+1
                aux = arreglo[j+1];             //cambia los valores
                arreglo[j+1] = arreglo[j];      //cambia los valores
                arreglo[j] = aux;               //cambia los valores
                intercambios++;  //suma 1 a la variabe intercambios si es que se cambio algun numero del arreglo
            }
        }
        if(intercambios == 0) {  //si no hace ningun intercambio es porque el arreglo estaba ordenado
            break;
        }
    }
    printf("Ya, hice %d iteraciones\n", i+1);
}