#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char* argv[]){
    int array[4];
    int i, j, k, l, n;

    
    for(i=0;i<4;i++){
        printf("\nInsira o %dº numero: ", i+1, setlocale(LC_ALL,"portuguese"));
        scanf("%d", &array[i]);
    }

    printf("\nArrays defindos: %d %d %d %d", array[0], array[1], array[2], array[3]);

    for(j=0;j<4-1;j++){
        for(k=0; k < 4 - k ; k++){
            printf("\n%d %d %d %d");
            if(array[k] > array[k+1]) {
                l = array[k];
                array[k]= array[k + 1];
                array[k + 1] = l;
            }
        }
    }
    printf("\nMenor array: %d", array[0]);
    printf("\nMaior array: %d", array[3]);


}
