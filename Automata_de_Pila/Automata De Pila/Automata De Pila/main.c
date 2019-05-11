//
//  main.c
//  Automata De Pila
//
//  Created by Matias Berenson on 10/05/2019.
//

#include <stdio.h>
#include <stdlib.h>

//void push(struct nodo*, char);
//char pop(struct nodo*);

typedef struct nodo {
    char info;
    struct nodo* sgte;
}minodo;
typedef minodo* ptrnodo;
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

void push (ptrnodo* pila, char caracter) {
    ptrnodo n = (struct nodo*) malloc(sizeof(minodo));
    n->info = caracter;
    n->sgte = *pila;
    *pila = n;
}

char pop (struct nodo* pila) {
    
    struct nodo* aux = pila;
    char n = aux -> info;
    pila = pila -> sgte;
    
    free(aux);

    return n;
}
