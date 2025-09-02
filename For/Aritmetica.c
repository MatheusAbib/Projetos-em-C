#include <stdio.h>

int main() {

    int a1, r;

    int an;

    int n = 1;

    printf("Digite o valor do primeiro termo (a1): ");

    scanf("%d", &a1);

    printf("Digite a razao (r): ");

    scanf("%d", &r);

    // Vamos imprimir os termos até que an seja menor que 50

    for (; ; n++) {

        an = a1 + (n - 1) * r;

        if (an >= 50) {

            break; // sai do loop se o termo for >= 50

        }

        printf("Termo a%d = %d\n", n, an);

    }

    return 0;

}

 
