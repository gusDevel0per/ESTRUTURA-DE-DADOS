#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){


    No* cabeca = NULL;
    FILE *arquivo = fopen("1kk_rand_float.csv", "r");

    if (arquivo == NULL){
        printf("Erro de leitura\n");
        return 1;
    }

    int tamanho = 1000000;
    float numero;

    while(fscanf(arquivo, "%f", &numero) != EOF){
        No *noTeste = (No *)malloc(sizeof(No));
        if (noTeste == NULL){
            printf("Erro de alocacao de memoria!\n");
            fclose(arquivo);
            return 1;
        }
    
    noTeste->valor = numero;
    noTeste->proximo_no = cabeca;
    cabeca = noTeste;
    }   

    final = clock();

    cpu_time = ((double)(final - inicio))/ CLOCKS_PER_SEC;

    fclose(arquivo);

    
}