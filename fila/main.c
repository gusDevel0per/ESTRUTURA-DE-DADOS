#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char* argv[]){
    
    struct Objeto o1;
    o1.valor = 'A' ;
    struct Objeto o2;
    o2.valor = 'B' ;
    struct Objeto o3;
    o3.valor = 'C' ;
    struct Fila* F = fila();

    enfileirar(o1, ptr_F);
    enfileirar(o2, ptr_F);
    enfileirar(o3, ptr_F);
    
    do{
        Objeto *ptr_o = desenfileirar(F);
        if(ptr_o!=NULL){
            printf("%c\n", ptr_o->valor);
        }
    }while(ptr_o != NULL);

    printf("%c\n", ptr_o->valor);

    exit(0);
}