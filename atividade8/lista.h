typedef struct No{
    char valor;
    struct No* proximo_no;
    int quantOcorrencia;
    } No;

No* no(char valor, No* proximo_no);
    
int lista_verificar_existencia(No* L,char valor_busca);

int lista_verificar_ocorrencias(No* L, char valor_busca);

void lista_imprimir_inversa(No* L);

void lista_inserir_no(No* L, No* no);

void lista_inserir_no_i(No* L, int i);

void lista_remover_no_i(No* L, int i);

void lista_liberar(No* L);

void lista_remover_no(No* L, char valor_busca);