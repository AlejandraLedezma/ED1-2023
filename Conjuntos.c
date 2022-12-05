#include <stdio.h>

#define SET_CAPACITY 10

typedef struct set{
    int data[SET_CAPACITY];
    int size;
}Set;

void setupSet(Set *s);
int existElement(Set s, int value);
int addElement(Set *s, int value);
int deleteElement(Set *s, int value);
void intersect(Set a, Set b, Set *result);
void unionn(Set a, Set b, Set *result);

int main(){
    Set setA, setB;
    Set setResult;
   // int r;

    
    setupSet(&setA);
    setupSet(&setB);
    setupSet(&setResult);

    addElement(&setA, 1);
    addElement(&setA, 2);
    addElement(&setA, 3);

    addElement(&setB, 3);
    addElement(&setB, 4);
    addElement(&setB, 5);

    intersect(setA, setB, &setResult);

/*
    r = addElement(&set, 10);
    r = addElement(&set, 11);
    r = addElement(&set, 12);
    r = addElement(&set, 13);
    r = addElement(&set, 14);
    r = addElement(&set, 15);
    r = addElement(&set, 16);
    r = addElement(&set, 17);
    r = addElement(&set, 18);
    r = addElement(&set, 19);

    r = deleteElement(&set, 13);
*/
    //eleminar un dato del inicio del conjunto
    //eliminar un dato del final
    //eliminar un valor en especifico 

    return 0;
}


void unionn(Set a, Set b, Set *result){
//todos los valores que tiene a y b estaran en result
    for(int i=0; i<a.size;i++){
        addElement(result, a.data[i]);
    }
    for(int j=0; j<b.size;j++){
        addElement(result, b.data[j]);
    }

}

void intersect(Set a, Set b, Set *result){

//van a quedar en result los datos que esten en A y que tambien esten en B
    for(int i=0; i<a.size; i++){
        if(existElement(b, a.data[i] == 1)){
            addElement(result, a.data[i]);
        }
    }
}

void diferencia(Set a, Set b, Set *result){
    //solo quedan los valores ya sean de a o de b que no son iguales a los del otro

//A-B
    for(int i=0; i<a.size; i++){
        if(existElement(b, a.data[i] != 1)){
            addElement(result, a.data[i]);
        }
    }

/*B-A
    for(int i=0; i<b.size; i++){
        if(existElement(a, b.data[i] != 1)){
            addElement(result, b.data[i]);
        }
    }
*/

}


int deleteElement(Set *s, int value){
    //encontrar la posiicon en donde esta el valor
    int found = -1;

    //busca el valro que va a eliminar
    for(int i = 0; i < s->size && found == -1; i++){
        if(s->data[i] == value){
            found = i; //necesito el indice en donde esta el valor
        }
    }
    //nos dice si encontro el valor 
    if(found != -1){ 
         s->size--;
        for(int actual = found; actual < s->size; actual++){
            s->data[actual] = s->data[actual + 1];
        }
        return 1;
    }
    return 0;
}


int existElement(Set s, int value){
    int found = 0;
    for(int i = 0; i < s.size && !found; i++){
        if(s.data[i] == value){
            found = 1;
        }
    }
    return found;
}


int addElement(Set *s, int value){
    if(existElement(*s, value) == 0 && s->size < SET_CAPACITY){
        s->data[s->size] = value;
        s->size++;
        return 1;
    }
    return 0;
}


void setupSet(Set *s){
    s->size = 0;
}

