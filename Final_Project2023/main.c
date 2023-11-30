#include <stdio.h>
#include <stdlib.h>
#include "treeNode.h"

int main(int argc, char* argv[]){

    No* root = NULL;
    int num[10];
    int c = 167;
    int i;
    int busca;

    for (i = 0; i < 10; i++){
        printf("Insira o %d%c numero: ", i+1, c);
        scanf("%d", &num[i]);
    }

    printf("Inserindo numeros na arvore...");

    for (i = 0; i < 10; i++){
        ab_inserir_node(&root, num[i]);
    }   

    printf("\nBusca de numero:\n");
    scanf("%d", &busca);

    printf("%d", ab_busca(root, busca));

    printf("\n");
    printf("Pre-ordem: \n");
    ab_imprimir_pre_ordem(root);
    
    printf("\n");
    printf("Em ordem: \n");
    ab_imprimir_em_ordem(root);
    
    printf("\n");
    printf("Pos-ordem: \n");
    ab_imprimir_pos_ordem(root);
    
    //busca = NULL;
    //printf("\nRemocao de numero: \n");
    //scanf("%d", &busca);

    //ab_min_max(root);


    return 0;
}