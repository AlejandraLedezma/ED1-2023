#include <stdio.h>

struct cancion{
    int CodCan;
    char NomCan[100];
    char NomAlb[100];
    int NumInt;
    char NomInt[3][100];
    int NumRepro;
};

void CapDatosCan(struct cancion *c);
int CancMasRepro(struct cancion canciones[100], int numCanciones);
void CapTodCan(struct cancion canciones[100], int numCanciones);

int main(){
    struct cancion canciones[100];

    int numCanciones;
    printf("Cuantas canciones?\n");
    scanf("%d", &numCanciones);

    CapTodCan(canciones, numCanciones);

    int index = CancMasRepro(canciones, numCanciones);

    printf("\nCancion con más reproducciones: %s", canciones[index].NomCan);
}

void CapDatosCan(struct cancion *c){
    printf("\nDame el codigo de la cancion: ");
    scanf("%d", &c->CodCan);
    getchar();
    printf("Dame el nombre de la cancion: ");
    scanf("%[^\n]s", c->NomCan);
    getchar();
    printf("Dame el nombre del album: ");
    scanf("%[^\n]s", c->NomAlb);
    printf("Dame el numero de interpretes: ");
    scanf("%d", &c->NumInt);

    for(int i=0; i < c->NumInt; i++) {
        printf("Dame el nombre del intérprete %d: ", i+1);
        getchar();
        scanf("%[^\n]s", c->NomInt[i]);
    }

    printf("Dame el numero de reproducciones: ");
    scanf("%d", &c->NumRepro);
}

void CapTodCan(struct cancion canciones[100], int numCanciones){

    for(int i = 0; i < numCanciones; i++) {
        CapDatosCan(&canciones[i]);
    }
}

int CancMasRepro(struct cancion canciones[100], int numCanciones){
    int indice = 0, max_rep = canciones[0].NumRepro;
    for(int i = 1; i < numCanciones; i++)
    {
        if(canciones[i].NumRepro > max_rep)
        {
            max_rep = canciones[i].NumRepro;
            indice = i;
        }
    }
    return indice;
}