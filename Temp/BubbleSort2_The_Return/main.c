#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"
void imprimir_arr(int *arr, int n){
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);

    }
    printf("\n");
}
int main(int argc, char *argv[ ]){
    int arr[] = {atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]), atoi(argv[8]), atoi(argv[9])};
    int n   = sizeof(arr)/sizeof(int);
    int i;
    
    imprimir_arr(arr, n);
    bubble_sort(arr, n);
    imprimir_arr(arr, n);
    exit(0);


}