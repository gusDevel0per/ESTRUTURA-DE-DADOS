#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

int quant_nos(No* L){
    if (L != NULL)
    {
        return 1+ quant_nos(L->proximo_no);
    }
    
}
int lista_verificar_existencia(No* L, char valor_busca){
    if(L != NULL){
        if(L->proximo_no->valor == valor_busca){
            return 1;
        }
        return lista_verificar_existencia(L->proximo_no, valor_busca);
    }
}

int lista_verificar_ocorrencias(No* L, char valor_busca){
    int qtd = 0;
    if(L != NULL){
        if(L->valor == valor_busca){
            qtd = 1;
        } else {
            qtd = 0;
        }
        return qtd + lista_verificar_ocorrencias(L->proximo_no, valor_busca);
    }
}

void lista_imprimir_inversa(No* L){
    if(L!= NULL){
        lista_imprimir_inversa(L->proximo_no);
        printf("%c", L->valor);
    }
}

void lista_inserir_no(No* L, No* no){
    if(L != NULL){
        if(L->proximo_no == NULL){
        L -> proximo_no = no;
        } else {
            lista_inserir_no(L->proximo_no, no);
        }
    }
}

void lista_inserir_no_i(No* L, int i){
    
    if(i<0 || i > quant_nos(L)-1){
        printf("posicao 0  ou menor eh indisponivel");
        exit(0);
    }
    
    if(i==0){
        No* new_no = no(L->valor, L->proximo_no);
        L->proximo_no = new_no;
    } else if(L != NULL){
        lista_inserir_no_i(L->proximo_no, i-1);
    }
}

void lista_remover_no_i(No* L, int i){
    if(i<0 || i > quant_nos(L)-1){
        printf("posicao 0  ou menor eh indisponivel OU posicao muito alta");
        exit(0);
    }

    if(i==0){
        No* lixo = L->proximo_no;
        L->valor = lixo->valor;
        L->proximo_no = lixo->proximo_no;
        free(lixo);
    } else if (L!= NULL){
        lista_remover_no_i(L->proximo_no, i - 1);
    }
}

void lista_remover_no(No* L, char valor_busca){
    if(L==NULL){
        return;
    }

    if(L->proximo_no != NULL && L->proximo_no->valor == valor_busca){
        No* lixo = L->proximo_no;
        L-> proximo_no = lixo ->proximo_no;
        free(lixo);
        lista_remover_no(L, valor_busca);
    } else {
        lista_remover_no(L->proximo_no, valor_busca);
    }


}

void lista_liberar(No* L){
    if(L != NULL){
        lista_liberar(L->proximo_no);
        free(L);
    }
}