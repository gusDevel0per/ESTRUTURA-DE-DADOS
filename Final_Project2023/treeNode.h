typedef struct TreeNode{
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
} No;

void ab_inserir_node(No** root, int key);

void ab_imprimir_node(No* root);

void ab_imprimir_pre_ordem(No* root);

void ab_imprimir_pos_ordem(No* root);

int ab_busca(No* root, int busca);

void ab_remover_node(No* root, int busca);

int ab_min_max(No* root);