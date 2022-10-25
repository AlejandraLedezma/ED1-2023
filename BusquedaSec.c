#include<stdio.h>

#define Max 10

int busquedaSec(int arreglo[Max], int n);
int busquedaSecRec(int arreglo[Max], int n, int i);

int main(){
    int arreglo [Max] = {4,9,3,15,93,8,11,7,14,12};
    int n;

    printf("Dame el numero que quieres buscar: ");
    scanf("%d",&n);

    int resu = busquedaSec(arreglo,n);
    printf("El valor esta en la posicion: %d\n", resu);

    resu = busquedaSecRec(arreglo, n, 0);
    printf("El valor esta en la posicion (recursiva): %d", resu);

}


//funcion iterativa
int busquedaSec(int arreglo[Max], int n){
    for(int i=0;i<Max;i++){
        if(arreglo[i]==n){ //verifica si se encuentra el numero en el arreglo
            return i;
        }
    }
    return -1;
}


//funcion recursiva
int busquedaSecRec(int arreglo[Max], int n, int i){
    if(i > Max-1)  //checa si el indice ya se paso del limite del arreglo
        return -1;

    if(arreglo[i] == n) // checha si sí se encuentra el numero
        return i;
    
    return busquedaSecRec(arreglo, n, i+1);
}