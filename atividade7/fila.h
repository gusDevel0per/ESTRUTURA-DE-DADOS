typedef struct ObjetoF{
    char valor[50];
    struct ObjetoF* objeto_anterior;
} ObjetoF;

struct Fila{
    struct ObjetoF* Inicio;
    struct ObjetoF* Final;
    int quantidade_objetos_fila;
};

struct Fila* fila();
void enfileirar(struct ObjetoF* o, struct Fila* F);
struct ObjetoF* desenfileirar(struct Fila* F);