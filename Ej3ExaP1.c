#include <stdio.h>

#define RENGLONES 3
#define COLUMNAS 4

void LeeArreglo(int arreglo[RENGLONES][COLUMNAS]);
void SumaArreglo(int arreglo[RENGLONES][COLUMNAS], int suma[RENGLONES][COLUMNAS]);
void RegresaArreglo(int suma[RENGLONES][COLUMNAS]);


int main(){
    int arreglo[RENGLONES][COLUMNAS];
    int suma[RENGLONES][COLUMNAS];

    LeeArreglo(arreglo);
    SumaArreglo(arreglo,suma);
    RegresaArreglo(suma);

}



void LeeArreglo(int arreglo[RENGLONES][COLUMNAS]){

    for(int i=0; i<RENGLONES; i++){
        for(int j=0; j<COLUMNAS; j++){
            printf("Dame el numero del renglon %d de la columna %d: ",i,j);
            scanf("%d",&arreglo[i][j]);

        }
    }
}



void SumaArreglo(int arreglo[RENGLONES][COLUMNAS], int suma[RENGLONES][COLUMNAS]){

    for(int i=0; i<RENGLONES; i++){
        for(int j=0; j<COLUMNAS; j++){
            suma[i][j]=arreglo[i][j]; //se inicialice con el mismo numero
            if(i>0){ //renglones mayores a 0 tiene vecino a la derecha
                suma[i][j]=suma[i][j]+arreglo[i-1][j];
            }
            if(j>0){ //que tiene vecino a la izquierda
                suma[i][j]=suma[i][j]+arreglo[i][j-1]; //j-1 vecino de la izquierd
            }
            if(i<RENGLONES-1){ // marca todos lo renglones de arriba que no son el ultimo y tienen un vecino abajo
                suma[i][j]=suma[i][j]+arreglo[i+1][j];
            }
            if(j<COLUMNAS-1){ //la columna no sea la ultima y si  no es la ultima tienen un vecino a la derecha
               suma[i][j]=suma[i][j]+arreglo[i][j+1];
            }
                    
        }
    }
    
}



void RegresaArreglo(int suma[RENGLONES][COLUMNAS]){
    
        for(int i=0; i<RENGLONES; i++){
            for(int j=0; j<COLUMNAS; j++){
            printf("%d ",suma[i][j]);

        }
        printf("\n");
    }
}