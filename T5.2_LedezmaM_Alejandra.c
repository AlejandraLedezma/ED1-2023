/*
Alejandra Ledezma Martinez
estructuras de datos I
5 de septiembre del 2022
dado el precio por kilo y peso, dar el descuento de la manzana 
*/

#include<stdio.h>

int main(){

    float kilos, desc, price, desct;

    printf("Give the kilos: ");
    scanf("%f",&kilos);
    printf("Give the price: ");
    scanf("%f",&price);

    if(kilos<=2){
        printf("No discount, the price is: %.2f",price);
    }else if(kilos>=2.01 && kilos<=5){
        desc=price*0.10;
        desct=price-desc;
        printf("Discount of 10 percent, the price is: %.2f",desct);
    }else if(kilos>=5.01 && kilos<=10){
        desc=price*0.15;
        desct=price-desc;
        printf("Discount of 15 percent, the price is: %.2f",desct);
    }else{
        desc=price*0.2;
        desct=price-desc;
        printf("Discount of 20 percent, the price is: %.2f",desct);
    }

return 0;

}