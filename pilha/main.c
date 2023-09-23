#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char* argv[]){

    Objeto o1;
    o1.valor = 'A';
    Objeto o2;
    o2.valor = 'B';
    Objeto o3;
    o3.valor = 'C';
    Pilha* P = pilha();

    empilhar (&o1, P);
    empilhar (&o2, P);
    empilhar (&o3, P);
    Objeto* o;
    do{
        o = desempilhar (P);
        if(o !=NULL){
            printf("%c\n", o->valor);
        }
    }while(o !=NULL);


    exit(0);
}