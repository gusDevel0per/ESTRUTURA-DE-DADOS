#include <stdio.h>
#include <stdlib.h>

typedef struct P{
    int x;
    int y;
} P;

int main(){
    int a;
    int b=a;
    int* p=&a;

    /*printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", p);
    printf("a = %d\n", &a);

    int* p1;

    p1 = malloc(sizeof(int)*3);
    printf("p1 = %p\n", p1);
    printf("*p1 = %p\n", *p1);
    *p1 = 2;
    printf("*p1 = %p\n", *p1); 

    p1++;
    *p1=5;
    printf("p1 = %p\n", p1);
    printf("*p1 = %p\n", *p1);

    p1[1]=7;
    printf("p1 = %p\n", p1[1]);
    printf("*p1 = %p\n", *p1[1]);*/

    P ponto;
    ponto.x = 1;
    ponto.y = 2;
    printf("(%d,%d)", ponto.x, ponto.y);
    int qtd_pontos = atoi(argv[1]);
    Ponto* pontos = malloc (sizeof(Ponto)*qtd_pontos);
    for(int i = 0; i < qtd_pontos; i++){
    pontos[i].x = scanf("%d", &pontos[i].x);
    pontos[i].y = scanf("%d", &pontos[i].y);
    }


    return 0;
}