#include <stdio.h>
 
int main() {

	int vetor[5];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("Digite o numero %i: ", i + 1);
			scanf("%i", &vetor[i]);
	}
	
	printf("Dados Inseridos: \n");
		
	for (i = 0; i < 5; i++){
		printf("%i ", vetor[i]);
	
	}
}

 
