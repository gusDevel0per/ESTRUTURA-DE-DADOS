#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

void bubble_sort(char palavra[3][10], int n){
    //char aux;
    
    
    for (int i=0; i<3;i++){
                printf(" i=%d ", i);
        for(int j = 0; j<2;j++){
            if(strcmp(palavra[i], palavra[i+1])>0){
                
                printf("f = %d ", j);
                char aux[10];
                strcpy(aux, palavra [j]);
                strcpy(palavra [j], palavra [j+1]);
                strcpy(palavra [j+1], aux);
            }
        }
    }
    for(int i=0; i<=2;i++){
        printf("%s", palavra[i]);
    }
}

