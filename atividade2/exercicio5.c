#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int array1[4] = {5, 7, 9, 6}, array2[4] = {6, 5, 7, 9}, multiplicacao[4];
	int n = 0, m = 0, i = 0, j = 0; 
	printf("array 1: ");
	for(n=0; n < 4; n++){
		printf(" %d", array1[n]);
	}
	printf("\narray 2: ");
	for(m=0; m < 4; m++){
		printf(" %d", array2[m]);
	}
	
	for(i=0; i < 4; i++){
		for(j=0; j < 4;j++){
			if(array1[i]==array2[j]){
				multiplicacao[i] = array1[i] * array2[j];
			}
		}
	}
	
	printf("\nResultados da multiplicação de numeros iguais: %d %d %d %d", multiplicacao[0], multiplicacao[1], multiplicacao[2], multiplicacao[3], setlocale(LC_ALL,"Portuguese"));
	
	return 0;
}
