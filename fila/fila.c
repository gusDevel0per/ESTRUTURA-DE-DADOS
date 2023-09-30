#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct Fila* fila(){
    struct Fila* ptr_F = (struct Fila*) malloc(sizeof(struct Fila));
    ptr_F->Inicio = NULL;
    ptr_F->Final = NULL;
    ptr_F->quantidade_objetos = 0;
    return ptr_F;
}

void enfileirar(struct Objeto* ptr_o, struct Fila* ptr_F){
    if(ptr_F->Inicio == NULL){
        ptr_F->Inicio = ptr_o;
        ptr_F->Final = ptr_o;
        ptr_o->objeto_anterior = NULL;
    } else {
        ptr_F->Final->objeto_anterior= ptr_o;
    }
    ptr_F-> quantidade_objetos++;
}

struct Objeto* desenfileirar(struct ptr_F){
    if(ptr->quantidade_objetos == 0){
        return NULL;
    }
    struct Objeto* ptr_o = ptr_F->Inicio;
    ptr_F->Inicio = ptr_o->objeto_anterior;
    ptr_F->quantidade_objetos--;
    return ptr_o;
}