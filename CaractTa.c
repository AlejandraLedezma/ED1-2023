#include<stdio.h>

#define TAM 100

void PideCade(char frase[TAM]);
void PideLetra(char letra);
void VecesLetra(int cont, char letra, char frase[TAM]);

int main(){

    char frase[TAM];
    char letra;
    int cont=0;

    PideCade(frase[TAM]);
    PideLetra(letra);
    VecesLetra(cont, letra,frase[TAM]);

    return 0;
}

void PideCade(char frase[TAM]){
    printf("Dame la oracion: ");
    scanf("\n%[^\n]",frase);
}

void PideLetra(char letra){
    printf("Dame la letra que quieres saber que se repite: ");
    scanf("%s",letra);
}

void VecesLetra(int cont, char letra, char frase[TAM]){

    for(int i=0; i<=TAM-1; i++){
        if(frase[i]==letra){
           cont=cont+1;
        }
    }
    printf("La letra aparece %d veces",cont);

}