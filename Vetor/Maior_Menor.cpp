#include <stdio.h>

int main() {

    // vetor já definido

    int vetor[] = {8, 3, 15, 2, 9, 20, 7};

    int n = sizeof(vetor) / sizeof(vetor[0]); // calcula tamanho do vetor

    int i;

    // inicializa maior e menor com o primeiro valor

    int maior = vetor[0];

    int menor = vetor[0];

    // percorre o vetor para achar maior e menor

    for (i = 1; i < n; i++) {

        if (vetor[i] > maior) {

            maior = vetor[i];

        }

        if (vetor[i] < menor) {

            menor = vetor[i];

        }

    }

    // mostra os resultados

    printf("Valores no vetor:\n");

    for (i = 0; i < n; i++) {

        printf("%d ", vetor[i]);

    }

    printf("\nMaior valor: %d", maior);

    printf("\nMenor valor: %d\n", menor);

    return 0;

}
 
