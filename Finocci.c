#include <stdio.h>

int fb(int n);

int main(){

    int numerouser, res = 0;
    int n1=0, n2=1;

    printf("Dame el numero: ");
    scanf("%d",&numerouser);

    printf("%d\n", fb(numerouser));

}

int fb(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    return fb(n-1) + fb(n-2); // los numeros son la posicion de fb
}

/*
0 1 1 2 3 5 8 13 21
1 2 3 4 5 6 .... n


    for(int i=2; i<numerouser; i++){
        res = n1+n2;
        n1 = n2;
        n2 = res;

    }

    if (numerouser == 1) {
        printf("%d\n", n1);
    } else if (numerouser == 2) {
        printf("%d\n", n2);
    } else {
        printf("%d\n", res);
    }
    */
