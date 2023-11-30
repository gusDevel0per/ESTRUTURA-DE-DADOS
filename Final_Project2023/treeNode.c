#include <stdio.h>
#include <stdlib.h>
#include "treeNode.h"

No* no(int key){
    No* no = malloc(sizeof(No));
    no->key = key;
    no->left = NULL;
    no->right = NULL;
    return no;
}

void ab_inserir_node(No** root, int key){

    if((*root) == NULL){
        (*root) = no(key);
    } else {
        if (key > (*root)->key){
            ab_inserir_node(&(*root)->right, key);
        } else {
            ab_inserir_node(&(*root)->left, key);
        } 
    }
}

void ab_remover_node(No* root, int busca){
    if(busca != NULL && root != NULL){

        if(root->key == busca){
            if (root->right = NULL){
                return root->left;
            }
            else if(root->left){
                return root->right;
            } else {

            }
        }
            else if(root->key < busca){
                ab_remover_node(root->left, busca);
            } else {
                ab_remover_node(root->right, busca);
            }
        
        ab_remover_node(root->right, busca);
        }
        

    
}

void ab_imprimir_pre_ordem(No* root){
    if(root !=NULL){
    
    printf("%d ", root->key);
    ab_imprimir_pre_ordem(root->left);
    ab_imprimir_pre_ordem(root->right);
    }

}

void ab_imprimir_em_ordem(No* root){
if(root != NULL){

    ab_imprimir_em_ordem(root->left);
    printf("%d ", root->key);
    ab_imprimir_em_ordem(root->right);
}

}

void ab_imprimir_pos_ordem(No* root){
    if(root !=NULL){

    ab_imprimir_pos_ordem(root->left);
    ab_imprimir_pos_ordem(root->right);
    printf("%d ", root->key);
    }

}

int ab_busca(No* root, int busca){
    if(root == NULL){
        return 0;
    }
    if(root->key == busca){
        return 1;
    }else if(busca < root->key){
        return ab_busca(root->left, busca);
    }else{
        return ab_busca(root->right, busca);  
    }
        
}

int ab_min_max(No* root){
    
    if(root == NULL){
        return 0;
    }
    int max = root->key; 
    int min = root->key;
    printf("%d", root->key);
    if (root->key > max);
    {
        max = ab_min_max(root->right);

    } 
    if (root->key < min){
        min = ab_min_max(root->left);
    }
    
    
    return max, min;
}
