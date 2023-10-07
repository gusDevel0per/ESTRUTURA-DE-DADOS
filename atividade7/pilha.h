#include <string.h>

typedef struct Objeto{
    char valor[200];
    struct Objeto* proximo_objeto;
    struct Objeto* objeto_anterior;

} Objeto;
typedef struct Pilha{
    Objeto* topo;
    int quantidade_objetos;
} Pilha;

Pilha* pilha();
void empilhar(Objeto* o, Pilha *P);
Objeto* desempilhar(Pilha *P);