#include <stdio.h>


	int main () {
		
		int vetor[2];
		int i;
		float r = 0;
	
		for (i = 0; i < 2; i++){
			printf("Digite o numero %d: ", i + 1); //i + 1 é só para aparecer bonitinho no printf
			scanf("%i", &vetor[i]);
		}
		
		for (i = 0; i < 2; i++){
			r += vetor [i];
		}
				
		printf("Resultado: %.2f\n", r/2);
		
		return 0;
	}
