#define TAM_TABELA 50
#define TAM_VALOR TAM_ALFABETO*TAM_ALFABETO
#define TAM_ALFABETO 26

int hash(char* chave);

char** tabela_hash();

void tabela_hash_put(char* chave, char* valor, char** tabela);

char* tabela_hash_get(char* chave, char** tabela);

int tabela_hash_contains(char* chave, char** tabela);

void tabela_hash_remove(char* chave, char** tabela);