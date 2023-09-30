struct Objeto{
    char valor;
    struct Objeto* objeto_anterior;
};

struct Fila{
    struct Objeto* Inicio;
    struct Objeto* Final;
    int quantidade_objetos;
};

struct Fila* fila();
void enfileirar(struct Objeto* o, struct Fila* F);
struct Objeto* desenfileirar(struct Fila* F);