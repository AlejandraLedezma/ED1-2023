#include<stdio.h>

#define Max 10
int BusquedaBi(int arreglo[Max], int n);
int BusquedaBiRecu(int arreglo[Max], int n, int left, int right);


int main(){
    int arreglo[Max] = {4, 20, 38, 45, 67, 88, 110, 137, 149, 182};
    int n;

    printf("Dame el numero que quiere buscar: ");
    scanf("%d", &n);

    int resu = BusquedaBi(arreglo,n);
    printf("El valor esta en la posicion (iterativo): %d\n", resu);

    int resu2 = BusquedaBiRecu(arreglo, n, 0, Max-1);
    printf("El valor esta en la posicion (recursivo): %d\n", resu2);
}


//funcion de busqueda binaria interativa
int BusquedaBi(int arreglo[Max], int n){
    int left = 0;  //comienza en la posicion del arreglo
    int right = Max-1;  //la ultima posicion del arreglo

    while (left <= right)  //mientras izquierda sea menor-igual a derecha
    {
      int middle = (left + right) / 2; //busca la mitad del arreglo

     if(arreglo[middle] == n){ //lo encontro en el punto medio
        return middle;

      }if(arreglo[middle] > n){ //busca del lado izquierdo
        right = middle - 1;

    }else{ //busca del lado derecho
        left = middle + 1;
    }
    }
    return -1; //si no lo encuentra 
}

    
//funcion de busqueda binaria recursiva
int BusquedaBiRecu(int arreglo[Max], int n, int left, int right){
    if(left > right){
        return -1;
    }

    int middle = (left + right)/2;

    if(arreglo[middle] == n){
        return middle;
    }
    if(arreglo[middle] > n){
        return BusquedaBiRecu(arreglo, n, left, middle-1);
    } else {
        return BusquedaBiRecu(arreglo, n, middle+1, right);
    }
}
