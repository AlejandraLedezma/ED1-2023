#include<stdio.h>

#define MAX 5
void solArre(int arreglo[MAX]);
int SumaPosPares(int arreglo[MAX]);
int SumaPares(int arreglo[MAX]);
void SumaNoSobre(int arreglo[MAX]);

int main(){

    int arreglo[MAX];

    solArre(arreglo);
    printf("La suma de las posiciones pares es: %d\n", SumaPosPares(arreglo));
    printf("La suma de los valores pares es: %d\n", SumaPares(arreglo));
    SumaNoSobre(arreglo);
}


//funcion que solicita los valores del arreglo

void solArre(int arreglo[MAX]){

    for(int i=0; i<MAX; i++){
        printf("Dame el valor %d del arreglo: ",i);
        scanf("%d",&arreglo[i]);
        if(arreglo[i]>100 || arreglo[i]<1){
            printf("cantidad invalida\n");
            printf("Dame el valor %d del arreglo: ",i);
            scanf("%d",&arreglo[i]);
        }
    }
}


//funcion que regresa la suma de las posiones pares

int SumaPosPares(int arreglo[MAX]){
    int sumaPosPa=0;

    for(int i=0; i<MAX; i++){
        if(i%2 == 0){
            sumaPosPa=sumaPosPa+arreglo[i];
        }
    }
    return sumaPosPa;
}


//funcion que regresa la suma de los valores pares
int SumaPares(int arreglo[MAX]){
    int sumaPa=0;

    for(int i=0; i<MAX; i++){
        if(arreglo[i]%2 == 0){
            sumaPa=sumaPa+arreglo[i];
        }
    }
    return sumaPa;
}

//funcion sume los valores del arreglo mientras no pase de 100
void SumaNoSobre(int arreglo[MAX]){
    int sumaValores=0, cantidadNum=0;

    for(int i=0; i<MAX; i++){
        if(sumaValores!=100){
            sumaValores=sumaValores+arreglo[i];
            cantidadNum=cantidadNum+1;
        }
    }
    printf("La suma de los valores son: %d y la cantidad de numeros sumados es: %d",sumaValores,cantidadNum);

}



