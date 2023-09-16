#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
void imprimir_arr(int *arr, int n){
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);

    }
    printf("\n");
}
int main(int argc, char* argv[]){
    int arr[] = {3, 6, 5 ,34, 63, 74, 67, 9, 7};
    int n   = sizeof(arr)/sizeof(int);
    imprimir_arr(arr, n);
    bubble_sort(arr, n);
    imprimir_arr(arr, n);
    exit(0);


}