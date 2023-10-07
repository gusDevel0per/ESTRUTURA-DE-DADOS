#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include "fila.h"

int main(int argc, char* argv[]){
    int exemplo;
    printf("escolha um exemplo: \n1- Historico de pesquisas \t2- Replays de partidas em ordem de mais velho ao mais recente");
    scanf("%d", &exemplo);
    Objeto o1;
    Objeto o2;
    Objeto o3;
    Objeto o4;
    Objeto o5;

    ObjetoF obj1;
    ObjetoF obj2;
    ObjetoF obj3;
    ObjetoF obj4;
    ObjetoF obj5;

    Objeto* o;
    switch (exemplo){
    case 1:
    //Pilha é utilizado para ver o histórico de pesquisa
    strcpy(o1.valor,"https://www.google.com/");
    //Os links são colocados na pilha
    Pilha* P = pilha();
    empilhar (&o1, P);
    strcpy(o2.valor,"https://www.youtube.com/");
    empilhar (&o2, P);
    strcpy(o3.valor,"https://www.youtube.com/watch?v=KrLj6nc516A");
    empilhar (&o3, P);

    
    //As pilhas são desempilhadas e listadas
    do{
        o = desempilhar (P);
        
        if(o !=NULL){
            printf("%s\n", o->valor);
        }
    }while(o !=NULL);
    break;
    case 2:


    //O jogo Fortnite salva os seus replays na ordem de ultimo para 
    strcpy (obj1.valor, "Replay_061020231945");
    strcpy (obj2.valor, "Replay_061020232021");
    strcpy (obj3.valor, "Replay_061020232047");
    strcpy (obj4.valor, "Replay_071020231012");
    strcpy (obj5.valor, "Replay_070720231049");
    

    struct Fila* F = fila();

    enfileirar(&obj1, F);
    enfileirar(&obj2, F);
    enfileirar(&obj3, F);
    enfileirar(&obj4, F);
    enfileirar(&obj5, F);

    ObjetoF *o;

    do{
        o = desenfileirar(F);
        if(o!=NULL){
            printf("%s\n", o->valor);
        }
    }while(o != NULL);

    break;
    default:
    printf("Alternativa invlida");
    break;
    }

    exit(0);
}