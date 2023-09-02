#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int cpf;
    char data_nascimento[12];
} Pessoa;
int main(int argc, char* argv[]){

    FILE *f;

    f = fopen("teste.dat", "wb");
    if(f == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    
    Pessoa p;
    strcpy(p.nome, "Joao");
    p.cpf = 123456789;
    strcpy(p.data_nascimento, "15/11/1998");
    fwrite(&p, sizeof(Pessoa), 1, f);
    
    fclose(f);

    
}