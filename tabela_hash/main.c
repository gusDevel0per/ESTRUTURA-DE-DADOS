#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabela_hash.h"

int main(int argc, char* argv[]){

    char** tabela = tabela_hash();

    printf("hello world\n");

    tabela_hash_put("Abelha","mel", tabela);
    tabela_hash_put("bola", "futebol", tabela);
    tabela_hash_put("bala","doce", tabela);


    printf("Hash(Abelha)=>%s\n", tabela_hash_get("Abelha", tabela));
    printf("Hash(bola)=>%s\n", tabela_hash_get("bola", tabela));
    printf("Hash(bala)=>%s\n", tabela_hash_get("bala", tabela));
    printf("Hash(Abelha)=>%d\n", hash("Abelha"));
    printf("Hash(Futebol)=>%d", hash("Futebol"));
    printf("Contains(bala)=>%d", tabela_hash_contains("bala", tabela));
    tabela_hash_remove("bala", tabela);
    printf("Contains(bala)=>%d", tabela_hash_contains("bala", tabela));

    exit(0);
}