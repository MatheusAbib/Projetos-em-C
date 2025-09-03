#include <stdio.h>

#include <math.h>

int main() {

    int n, i, exp;

    printf("Quantos valores voce quer digitar? ");

    scanf("%d", &n);

    int vetor[n];

    int *ptr = vetor; // ponteiro aponta pro início do vetor

    // leitura dos valores usando ponteiro

    for (i = 0; i < n; i++) {

        printf("Digite o valor %d: ", i + 1);

        scanf("%d", (ptr + i)); // equivalente a &vetor[i]

    }

    // leitura do expoente

    printf("Digite o expoente: ");

    scanf("%d", &exp);

    // mostra a lista original

    printf("\nValores originais:\n");

    for (i = 0; i < n; i++) {

        printf("%d ", *(ptr + i)); // equivalente a vetor[i]

    }

    // mostra a lista elevada ao expoente

    printf("\nValores elevados a %d:\n", exp);

    for (i = 0; i < n; i++) {

        printf("%.0f ", pow(*(ptr + i), exp)); // acesso via ponteiro

    }

    printf("\n");

    return 0;

}
 
