#include <stdio.h>

#define QUEUE_CAPACITY 100

typedef struct {
    int data[QUEUE_CAPACITY];
    int start;
    int end;
    int capacity; // Auxiliar para saber cuantos hay en la cola
} Queue;



void insert(Queue *q, int value);
int delete(Queue *q);
int isEmpty(Queue q);
int isFull(Queue q);
void setupQueue(Queue *q);



int main() {
    Queue q;

    setupQueue(&q);

//colocaremos 120 para asi poder darnos cuenta si funciona de manera correcta
//ya que la longitu de la cola es de 100 solamente

    for(int i=1; i<=120; i++) {
        insert(&q, i);
    }

    for(int i=0; i<120; i++) {
        printf("%d\n", delete(&q));
    }
    
}



void insert(Queue *q, int value) {
    if (isFull(*q)) {
        return;
    }

    q->data[q->end] = value;
    q->capacity++;
    
    q->end++;
    if(q->end == QUEUE_CAPACITY) {
        q->end = 0;
    }
}



int delete(Queue *q) {
    if (isEmpty(*q)) {
        return -1;
    }

    int value = q->data[q->start];
    q->capacity--;

    q->start++;
    if(q->start == QUEUE_CAPACITY) {
        q->start = 0;
    }

    return value;
}



// Parámetro por valor ya que no modificamos la cola, solo se requiere saber
// si está vacía o no
//saber si esta vacia la cola
int isEmpty(Queue q) {
    if (q.capacity > 0) { //si los valores que hay en la cola son mayor a 0
        return 0;
    } else {
        return 1;
    }
}


//saber si esta llena la cola
int isFull(Queue q) {
    if (q.capacity < QUEUE_CAPACITY) {//si los valores que hay en la cola son menor a la capacidad de la cola
        return 0; 
    } else {
        return 1;
    }
}



void setupQueue(Queue *q) {
    q->start = 0;
    q->end = 0;
    q->capacity = 0;
}
