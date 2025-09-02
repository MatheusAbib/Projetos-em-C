#include <stdio.h>


	int main () {
		
		int vetor[2];
		int i;
		float r = 0;
		
		printf("Digite o primeiro numero: ");
			scanf("%i", &vetor[0]);
		printf("Digite o segundo numero: ");
			scanf("%i", &vetor[1]);
		
		for (i = 0; i < 2; i++ ){
			r += vetor [i];
		}
		printf("Resultado: %.2f\n", r/2);
	}
