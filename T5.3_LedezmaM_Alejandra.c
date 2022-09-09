/*
Alejandra Ledezma Martinez
estructuras de datos I
5 de septiembre del 2022
determinar que tipo de triangulo es 
*/

#include<stdio.h>

int main(){

    int lado1, lado2, lado3;

    printf("Give side 1: ");
    scanf("%d",&lado1);
    printf("Give side 2: ");
    scanf("%d",&lado2);
    printf("Give side 3: ");
    scanf("%d",&lado3);

    if(lado1==lado2 && lado1==lado3 && lado2==lado3){
        printf("Es equilatero");
    }else if(lado1==lado2){
        printf("Es isosceles");       
    }else if(lado1==lado3){
        printf("Es isosceles");    
    }else if(lado2==lado3){
        printf("Es isosceles");
    }else{
        printf("Es escaleno");
    }


return 0;

}