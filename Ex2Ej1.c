#include <stdio.h>

struct cancion{
    int CodCan;
    char NomCan[100];
    char NomAlb[100];
    int NumInt;
    char NomInt[100];
    int NumRepro;
};

void CapDatosCan();
int CancMasRepro(void CapDatosCan(), int numCan);
void CapTodCan(void CapDatosCan(), int numCan);



int main(){
    int numCan;

    printf("Dame el numero de canciones: ");
    scanf("%d", &numCan);


    CapDatosCan();
    CapTodCan(CapDatosCan, numCan);

    int viral = CancMasRepro(CapDatosCan,numCan);


}


void CapDatosCan(){
    struct cancion c;

    printf("Dame el codigo de la cancion: ");
    scanf("%d",&c.CodCan);
    printf("Dame el nombre de la cancion: ");
    scanf("%[^\n]", &c.NomCan);
    printf("Dame el nombre del album: ");
    scanf("%[^\n]", &c.NomAlb);
    printf("Dame el numero de interpretes: ");
    scanf("%d",&c.NumInt);
    printf("Dame el nombre de los interpretes: ");
    scanf("%[^\n]",&c.NomInt);
    printf("Dame el numero de reproducciones: ");
    scanf("%d",c.NumRepro);

}


void CapTodCan(void CapDatosCan(), int numCan){

    for(int i=0;i<numCan;i++)
    {
        arreglo[i] = CapDatosCan();
    }

}


int CancMasRepro(void CapDatosCan(), int numCan){
    int aux=0, viral;
    for(int i=0;i<Canciones;i++)
    {
        if(arreglo[i].NumRepro>aux)
        {
            aux=arreglo[i].NNumRepro;
            viral=i;
        }
    }
    return(viral);

}