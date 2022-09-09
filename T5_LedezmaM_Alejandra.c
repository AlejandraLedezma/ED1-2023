/*
Alejandra Ledezma Martinez
estructuras de datos I
5 de septiembre del 2022
dada la hora y minutos dados por el usuario, regresar un mensaje 
*/

#include<stdio.h>

int main(){

int hour, min;

printf("Give the hour: ");
scanf("%d",&hour);
printf("Give the minutes: ");
scanf("%d",&min);

if(hour>=0 && min>=00 && hour<=11 && min <=59){
    printf("Good morning");
}else if(hour>=12 && min>=00 && hour<=17 && min <=59){
    printf("Good evening");
}else if(hour>=18 && min>=00 && hour<=23 && min <=59){
    printf("Good night");
}else{
    printf("No valid hour");
}


return 0;

}