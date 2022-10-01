#include <stdio.h>

#define TAM 10

void PatronA(int arreglo[TAM][TAM]);
void PatronB(int arreglo[TAM][TAM]);

int main(){
    int arreglo[TAM][TAM];

    PatronA(arreglo);
    PatronB(arreglo);

}


//funcion para el primer patron "A"
void PatronA(int arreglo[TAM][TAM]){

    for(int r=0; r<TAM; r++){ //renglones
        for(int c=0; c<TAM; c++){ //columnas
            if(r==0 || r==TAM-1 || c==0 || c==TAM-1){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}



//funcion para el segundo patron "b"
void PatronB(int arreglo[TAM][TAM]){
    
        for(int r=0; r<TAM; r++){ //renglones
            for(int c=0; c<TAM; c++){ //columnas
                if(r==c || c+r==TAM-1){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
        printf("\n");
    }
}
