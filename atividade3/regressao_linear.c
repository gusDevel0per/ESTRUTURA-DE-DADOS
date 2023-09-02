#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Ponto{
    float x;
    float y;
} p;
int main(int argc, char*argv[]){

    FILE * arquivo;

    int contador = 0;
    struct Ponto p;
    float soma_x, soma_y; 
    float media_x, media_y;
    float soma1, soma2;
    
    if(argv < 2){
        printf("Uso: %s <nome do arquivo>\n", argv[0]);
    }
    arquivo = fopen(argv[1], "r");
    if(arquivo==NULL){
        printf("Falha all abrir o arquivo %s\n", argv[1]);
        return 1;
    }
    while(fscanf(arquivo, "%f %f", &p.x, &p.y)== 2){
        soma_x += p.x;
        soma_y += p.y;
        contador++;
    }
    fclose(arquivo);

    if (contador > 0){
        media_x = soma_x / contador;
        media_y = soma_y / contador;
        arquivo = fopen(argv[1], "r");
        /*while (fscanf(arquivo, "%f %f", &p.x, &p.y)){

        }*/
    
    printf("%f %f %f %f", &soma_x, &media_x, &soma_y, &media_y);
    
    }

    /*intercepcao
    inclinacao*/
}