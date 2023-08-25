#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

	
int main(){
	char Texto[3][60]= {"texto", "J", "EDA"};
	char busca_string[60];
	int resultado, i;
	
	printf("%s %s %s", Texto[0], Texto[1], Texto[2]);
	
	scanf("%s", busca_string);
	
	for(i=0;i<3;i++){
	resultado = strcmp(busca_string, Texto[i]);
	if(resultado==0){
		break;
	}
	}
	printf("(AVISO! CaSe SeNsItIvE) 0 =tem\t1/-1 = não tem\n%d", resultado, setlocale(LC_ALL, "Portuguese"));
	
}

