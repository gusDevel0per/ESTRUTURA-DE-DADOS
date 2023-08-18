#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int numero, i, check = 0;

    numero= argv[1];

    printf("Numero inserido: %d");
    
    for(i=2;i<=n/2;++i){
        if(n % i == 0){
            check = 1;
            break;
        }
    }
    
    if(check==1){
        printf("\nO numero %d eh primo", numero);
    }else{
        printf("\nO numero %d nao eh primo", numero);
    }
    
return 0;
}