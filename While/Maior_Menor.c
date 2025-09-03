#include <stdio.h>
 
int main() {

    int n1=0 , n2=0 , n3= 0;
 
    while (n1 == n2 && n2 == n3){

        printf("Digite o numero 1: ");

        scanf("%i", &n1);
 
        printf("Digite o numero 2: ");

        scanf("%i", &n2);
 
        printf("Digite o numero 3: ");

        scanf("%i", &n3);
 
        if (n1 == n2 && n2 == n3) {

            printf("Todos os numeros sao iguais! Digite novamente.\n\n");

        }

    }
 
    if (n1 > n2 && n1 > n3) {

        printf("O numero 1 eh o maior\n");

    } else if (n2 > n1 && n2 > n3) {

        printf("O numero 2 eh o maior\n");

    } else {

        printf("O numero 3 eh o maior\n");

    }

}

 
