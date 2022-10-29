#include <stdio.h>

#define Max 4
int BusBiReto(int arreglo[Max], int n);

int main(){
    int arreglo[Max] = {1, 3, 5, 6};
    int n;


    printf("Dame un numero: ");
    scanf("%d",&n);

    //BusBiReto(arreglo, n);

     //imprime el arreglo
     printf("%d", BusBiReto(arreglo,n));

}

int BusBiReto(int arreglo[Max], int n){
 int left = 0;  //comienza en la posicion del arreglo
    int right = Max-1;  //la ultima posicion del arreglo
    int middle;

    while (left <= right)  //mientras izquierda sea menor-igual a derecha
    {
       middle = (left + right) / 2; //busca la mitad del arreglo

     if(arreglo[middle] == n){ //lo encontro en el punto medio
        return middle;
     }
     
     if(arreglo[middle] > n){ //busca del lado izquierdo
        right = middle - 1;

    }else{ //busca del lado derecho
        left = middle + 1;
    }

    }
    if(arreglo[middle] > n){
        return middle ;
    }else{
        return middle +1;
    }

}
