#include <stdio.h>

void OperaDupli(int a, int b, int *resu1);
void OperaResta(int a, int b, int c, int *resu2);
void OperaMulti(int c, int *resu3);


int main(){

    int a, b, c;
    int resu1, resu2, resu3;

    printf("Dame el entero 'a': ");
    scanf("%d",&a);
    printf("Dame el entero 'b': ");
    scanf("%d",&b);
    printf("Dame el entero 'c': ");
    scanf("%d",&c);
    OperaDupli(a,b,&resu1);
    OperaResta(a,b,c, &resu2);
    OperaMulti(c,&resu3);
    printf("El duple de %d es: %d",b,resu1);
    printf("\nLa resta de %d menos %d es: %d",c,a,resu2);
    printf("\nLa multiplicacion de %d por -1 es: %d ",c,resu3);
}


void OperaDupli(int a, int b, int *resu1){

    if(a>b){
    *resu1 = b*2;
    }else{
        *resu1 = 0;
    }
}

void OperaResta(int a, int b, int c, int *resu2){

    if(a<b){
        *resu2 = c - a;
    }else{
        *resu2 = 0;
    }
}


void OperaMulti(int c, int *resu3){

    if(c<0){
        *resu3 = c * -1;
    }else{
        *resu3 = 0;
    }
}