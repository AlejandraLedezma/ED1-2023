/*las pilas son una estructura de datos que nos permite apilar informacion
su caracteristica es que se inserta hasta arriba de la pila y 
se sacar tambien de hasta arriba de la pila

NECESITAMOS:
-estructura que contenga:
    1. un arreglo -CAPACIDAD
    2.un indice - tope(indice que nos dice si hay espaacio o no y donde insertar
    y de donde sacar)
-funcion que nos diga cuando la pila esta vacia
    asegurarse que tope tenga un valor valido -1
-funcion que nos diga cuando la pila esta llena
    tope es igual al capacidad -1 (depende de como se inicializo)
-funcion que inserte valores en la pila (push)
    checar si la pila tiene espacio (!estallena)
        *incrementa tope
        *colocar el valor en la posicion que dice tope
        *regresar 1
    no hay espacio
        *regresamos 0
-funcion que elimine valores en la pila(pop)
    checar si la pila tiene datos(!estavacia)
        *sacar el valor en la posiciom que dice tope
        *decrementar tope
        *regresamos 1
    regresamos 0
*/

#include <stdio.h>

#define STACK_CAPACITY 10

typedef struct{
    int pila[STACK_CAPACITY];
    int tope;
    int tam;
}Stack;

void setupStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);

int push(Stack *s, int value);
int pop(Stack *s);

int main(){
    Stack stack;
    //int r;

    setupStack(&stack);

    for(int i=1; i<=10; i++) {
        push(&stack, i);
    }

    for(int i=0; i<10; i++) {
        printf("%d\n", pop(&stack));
    }
}

void setupStack(Stack *s){
    s->tope = -1;
    s->tam = 0;
}

int isStackEmpty(Stack s){
    if(s.tope == -1){
        return 1;
    }return 0;
}

int isStackFull(Stack s){
    if(s.tope == STACK_CAPACITY - 1){
        return 1;
    }return 0;
}

//insertar valores dentro de la pila
int push(Stack *s, int value){

    //1. pregunto si la pila esta llena
    if(isStackFull(*s) == 0){
        s->tope++;
        s->pila[s->tope] = value;
        s->tam++;

        return 1;
    }
    return 0;
}

int pop(Stack *s){
    if(isStackEmpty(*s)){ //significa que esta vacia
        return -1;
    }else{ //si no esta vacia quitar el elemento
        int value = s->pila[s->tope];
        s->tope--;
        return value;
    }
    return 0;
}