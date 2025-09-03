#include <stdio.h>

int main() {
 
    int n, fatorial = 1;
 
    printf("Digite o valor de N: ");
 
    scanf("%i", &n);

 
		while (n > 0) {

		if (n > 1) {

		            fatorial *= n;

		        }

		        n--;

		    } ;
 
        

    printf("O fatorial de N eh: %i\n", fatorial);

    return 0;
 
}
 
 
