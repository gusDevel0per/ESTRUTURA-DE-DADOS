#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char* argv[]){
    int size;
    int i, soma = 0;
    printf("insira o tamanho da soma: ");
    scanf("%d", &size); 
    
    int array[size];

    for(i=0;i<size;i++){
        printf("\nInsira o %dº numero: ", i+1, setlocale(LC_ALL,"portuguese"));
        scanf("%d", &array[i]);
        soma = soma + array[i];
    }

    printf("O valor da soma eh: %d", soma);

    return 0;
}