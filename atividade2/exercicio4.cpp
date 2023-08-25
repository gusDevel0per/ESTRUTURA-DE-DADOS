#include <stdio.h>
#include <stdlib.h>

int main(){
	int conta_int_array[8] = {5, 7, 9, 6, 7, 11, 6, 5};
	int n, i = 0, counter = 0;
	printf("Insira um numero\n");
	scanf("%d", &n);
	
	for(i=0;i<8;i++){
		if(conta_int_array[i]==n){
			counter++;
		}
	}
	printf("%d",counter);
	
	return 0;
}
