#include <stdio.h>

#define Max 10
void AlgoBaraja(int arreglo[Max]);


int main(){

    int arreglo[Max]={10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
    AlgoBaraja(arreglo);

    for(int j=0; j<Max; j++){           //imprime el arreglo
        printf("%d, ",arreglo[j]);
    }

}


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
