#include<stdio.h>

#define Max 10

void SelSort(int arreglo[Max]);

int main(){
    int arreglo[Max] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 0};

    SelSort(arreglo);
/*
    for(int j=0; j<Max; j++){           //imprime el arreglo
        printf("%d, ",arreglo[j]);
    }*/


}

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