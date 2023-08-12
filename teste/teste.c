#include <stdio.h>

double calcular_dobro(double n){
    n = n*2;
    return n;
}

int main(int argc, char* argv[]){
    double n;
    printf("Insira numero: \n");
    scanf("%lf", &n);

    double a = calcular_dobro(n);

    printf("%lf", a);
/*do{
printf("%d ", n);

n = n * 1;

}while (n < 10);*/
}