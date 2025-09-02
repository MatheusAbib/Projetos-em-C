#include <stdio.h>
 
int main() {

    int vetor[3];

    int m;

    int r;

    int i;
 
    for (i = 0; i < 3; i++) {

        printf("Digite o valor %d: ", i + 1);

        scanf("%i", &vetor[i]);

    }
 
    printf("Digite o multiplicador: ");

    scanf("%i", &m);
 
    for (i = 0; i < 3; i++) {

        r = m * vetor[i];

        printf("\nValor original: %i", vetor[i]);

        printf("\nMultiplicado por %i: %i\n", m, r);

    }
 
    return 0;

}

 
