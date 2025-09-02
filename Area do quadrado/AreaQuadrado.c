#include <stdio.h>

int main (){
	int b;
	int h;
	int a;
	
	printf ("Bem Vindo! \n");
	
	printf("Digite a base: ");
	scanf("%i", &b);
	
	printf("Digite a altura: ");
	scanf("%i", &h);
	
	a = b * h;
	
	printf("A area do quadrado eh:  %i\n", a);
	
	if (a < 100){
	 printf("A area do quadrado e pequena");
		
	} else {
	  printf("A area do quadradoeh grande");
	}

	
	return 0;
}
