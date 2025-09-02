#include <stdio.h>

int main() {
 
    int n;

    int fatorial;

 
    printf("Digite o valor de N: ");
 
    scanf("%i", &n);

     for (fatorial = 1; n > 0; n--){
 
        if (n > 1) {
 
            fatorial *= n;

        }
 
    }

    printf("O fatorial de N eh: %i\n", fatorial);

    return 0;
 
}
 


 
