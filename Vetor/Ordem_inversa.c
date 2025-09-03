#include <stdio.h>
 
int main() {
 
    int vetor[] = {8, 3, 15, 2, 9, 20, 7};

    int n = 7;

    int i;
 
    printf("Valores no vetor:\n");
 
    for (i = 0; i < n; i++) {

        printf("%d ", vetor[i]);

    }

    printf("\nValores no vetor em ordem inversa:\n");

    for (i = n - 1; i >= 0; i--) {

        printf("%d ", vetor[i]);

    }

    printf("\n");
 
    return 0;

}

 
