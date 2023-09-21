#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

void imprimir_string(char *check){
    printf("\n");
    
    printf("%s", check);

    printf("\n");
}

int main(int argc, char *argv[]){

    char palavra[3][10];
    int n   = sizeof(palavra)/sizeof(int);
    char ordenado[3][10];
    FILE * arquivo;
    FILE * arquivo2;
    
    if(argv < 2){
        printf("Uso: %s <nome do arquivo>\n", argv[0]);
    }
    printf("a");
    arquivo = fopen( argv[1], "r");
    printf("%s", argv[1]);
    fscanf(arquivo, "%s %s %s", palavra[0], palavra[1], palavra[2]);
    
    for (int i=0; i <3; i++){ 
        printf("a");
    imprimir_string(palavra[i]);
    }
    

    fclose(arquivo);
    /*strcpy(ordenado[0], char1);
    strcpy(ordenado[1], char2);
    strcpy(ordenado[2], char3);*/

    bubble_sort(palavra, n);
    
    printf("\n");
    for(int i=0; i<=2;i++){
        printf("%s\n", palavra[i]);
    }
    arquivo2 = fopen("arq_palavras_ordenadas.txt", "w");

    fprintf(arquivo2, "%s\n %s\n %s", palavra[0], palavra[1], palavra[2]);

}