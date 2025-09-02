#include <stdio.h>
 
int main() {

    int a1, r;

    int an;

    int n = 1;
 
    printf("Digite o valor do primeiro termo (a1): ");

    scanf("%d", &a1);
 
    printf("Digite a razao (r): ");

    scanf("%d", &r);
 
    do {

        an = a1 + (n - 1) * r;

        printf("Termo a%d = %d\n", n, an);

        n++;

    } while (an < 50);
 
    return 0;

}

 
