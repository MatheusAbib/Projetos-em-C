#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int num01;
int num02;

float r;

printf("Digite um numero: ");
scanf("%i", &num01);
printf("O numero eh: %i \n", num01);

printf("Digite outro numero: ");
scanf("%i", &num02);
printf("O numero eh: %i \n", num02);

r = num01 + num02;

    printf("A soma do numero %i e do numero %i eh: %2.f\n", num01, num02, r); //%2.f significa que eu estou querendo que mostre 2 numeros após a virgula exemplo : "20.00"

	return 0;
}
