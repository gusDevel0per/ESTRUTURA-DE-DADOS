#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

struct Fila* fila(){
    struct Fila* F = (struct Fila*) malloc(sizeof(struct Fila));
    F->Inicio = NULL;
    F->Final = NULL;
    F->quantidade_objetos_fila = 0;
    return F;
}

void enfileirar(struct ObjetoF* o, struct Fila* F){
    if(F->Inicio == NULL){
        F->Inicio = o;
        F->Final = o;
        o->objeto_anterior = NULL;
    } else {
        F->Final->objeto_anterior= o;
    }
    F-> quantidade_objetos_fila++;
}

struct ObjetoF* desenfileirar(struct Fila* F){
    if(F->quantidade_objetos_fila == 0){
        return NULL;
    }
    struct ObjetoF* o = F->Inicio;
    F->Inicio = o->objeto_anterior;
    F->quantidade_objetos_fila--;
    return o;
}