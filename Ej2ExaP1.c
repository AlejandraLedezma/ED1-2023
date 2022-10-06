#include<stdio.h>

#define TAM 100

void PideCade(char frase[TAM]);
void CambiaVocales(char frase[TAM]);


int main(){

    char frase[TAM];

    PideCade(frase);
    CambiaVocales(frase);
    printf("%s",frase);
}


void PideCade(char frase[TAM]){
    printf("Dame la oracion: ");
    scanf("%[^\n]s", frase); //lee la cadena con espacios
}

void CambiaVocales(char frase[TAM]){

        for(int i=0; i<TAM; i++){
            if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
                frase[i] = frase[i]-32;
            }
            else if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
                frase[i] = frase[i]+32;
            }
        }

}