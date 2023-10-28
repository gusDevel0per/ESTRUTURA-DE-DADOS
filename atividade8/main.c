#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int main(int argc, char* argv){

    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', NULL);
    No* n3 = no('U', NULL);
    No* n4 = no('V', NULL);
    No* n5 = no('C', NULL);

    lista_inserir_no(n0,n1);
    lista_inserir_no(n0,n2);
    lista_inserir_no(n0,n3);
    lista_inserir_no(n0,n4);
    lista_inserir_no(n0,n5);

    char valor = 'C';

    printf("Ha valor C? %d", lista_verificar_existencia(n0,valor));
    printf("quantas vezes ocorre C?: %d", lista_verificar_ocorrencias);
    
    lista_imprimir_inversa(n0);

    lista_remover_no(n0, 'V');

    lista_imprimir_inversa(n0);

    lista_liberar(n0);
}