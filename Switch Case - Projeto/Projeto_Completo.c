#include <stdio.h>
 
	int main (){

	// variavel do switch menu

		int opcao;

	// variaveis do Media Fatec

	 	float p1;

		float t1;

		float p2;

		float t2;

		float b1;

		float b2;

		float media;

		float mf;

		float rec;

	// variaveis desconto de preco if else

		float preco;

		float desc;

		float pf;

	// variaveis desconto de preco switch case

		float precoSwitch;

		char descSwitch;

		float pfSwitch;

		float a = 0.5;

		float b = 0.8;

		float c = 0.15;

		float d = 0.30;
 
 
	// variais do fatorial
 
		int num;
 
		int fatorial = 1;
 
	// variaveis fibonnaci
 
		int numA = 0;
 
    	int numB = 1;
 
		int fib;
 
	// variaveis P.A.
 
	    int a1, r;
 
    	int an;
 
    	int n = 1;

	//// fim da sessão de variaveis

	do{


		printf("Digite uma opcao do menu: \n");

		printf("---------------------------\n");

		printf("1 - Media Fatec\n");

		printf("2 - Desconto de Preco\n");

		printf("3 - Desconto Switch Case\n");

		printf("4 - Fatorial \n");
 
		printf("5 - Fibonacci \n");
 
		printf("6 - P.A. \n");

		printf("7 - Fatorial While \n");

		printf("8 - Fatorial For \n");

		printf("9 - Fibonacci While \n");

		printf("10 - Fibonacci For \n");

		printf("11 - P.A. While \n");

		printf("12 - P.A. For \n");

		printf("13 - Sair \n");

		scanf("%i", &opcao);


	switch(opcao){

		case 1:
 
					printf("Bem vindo ao Siga!! \n");

					printf("Digite sua nota na p1: \n");

					scanf("%f", &p1);

					printf("Digite sua nota na t1: \n");

					scanf("%f", &t1);

					printf("------------------------ \n");

					printf("Digite sua nota na p2: \n");

					scanf("%f", &p2);

					printf("Digite sua nota na t2: \n");

					scanf("%f", &t2);

					b1 = (p1 * 0.70) + (t1 * 0.30);

					b2 = (p2 * 0.60) + (t2 * 0.40);

					media = (b1 + b2) / 2;

					if (media > 6){

						printf("Parabens! Voce passou!!\n");

						printf("Sua media foi: %2.f", media);

						}else if (media < 6){

						printf("Voce esta de recuperacao \n");

						printf("Sua media foi: %2.f", media);

						printf("\nDigite a nota da recuperacao: \n");

						scanf("%f", &rec);

						mf = (media + rec)/2;

						printf("Sua media foi: %2.f", mf);

					}

					if (mf >= 6){

						printf("\nVoce passou!!");

					}else {

						printf("\nReprovou");

					}		

			break;

		case 2:

					printf("Bem vindo!! \n");

					printf("Digite o preco \n");

					scanf("%f", &preco);

					printf("Descontos: A)5 % B)8 % C)15 % D)30 % \n");

					printf("Digite o valor do desconto \n");

					scanf("%f", &desc);


					if (desc == 5){

						pf = preco * 0.5;

						printf("Valor total com desconto: %2.f", pf);

					}else if (desc == 8){

						pf = preco * 0.8;

						printf("Valor total com desconto: %2.f", pf);

					} else if (desc == 15){

						pf = preco * 0.15;

						printf("Valor total com desconto: %2.f", pf);

					}else if (desc == 30){

						pf = preco * 0.30;

						printf("Valor total com desconto: %2.f", pf);

					} else {

						printf("Desconto inexistente");

					}

			break;

		case 3:

					printf("Bem vindo!! \n");

					printf("Digite o preco \n");

					scanf("%f", &precoSwitch);

					printf("Descontos: A)5 B)8 C)15 D)30 \n");

					printf("Digite o valor do desconto: \n");

					scanf(" %c", &descSwitch);


					switch(descSwitch){	

						case 'a': pfSwitch = precoSwitch * a;

						printf("Valor total com desconto: %.2f", pfSwitch);

							break;

						case 'b': pfSwitch = precoSwitch * b;

						printf("Valor total com desconto: %2.f", pfSwitch);

							break;

						case 'c': pfSwitch = precoSwitch * c;

						printf("Valor total com desconto: %2.f", pfSwitch);

							break;

						case 'd': pfSwitch = precoSwitch * d;

						printf("Valor total com desconto: %2.f", pfSwitch);

							break;

						default: printf("Desconto inexistente");

					}

							break;
 
		case 4:
 


					    printf("Digite o valor de N: ");
 
					    scanf("%i", &num);
 
					    do {
 
					        if (num > 1) {
 
					            fatorial *= num;
 
					        }
 
					        num--;
 
					    } while (num > 0);
 
					    printf("O fatorial de N eh: %i\n", fatorial);
 
 
			break;
 
		case 5:
 
					printf("Sequencia de fibonnaci \n");
 
				    do {
 
						printf("%i ", numB);
 
						fib = numA + numB;
 
						numA = numB;
 
						numB = fib;
 
 
					}while (numB < 200);
 
			break;
 
		case 6:
 
				    printf("Digite o valor do primeiro termo (a1): ");
 
				    scanf("%d", &a1);
 
				    printf("Digite a razao (r): ");
 
				    scanf("%d", &r);
 
				    do {
 
				        an = a1 + (n - 1) * r;
 
				        printf("Termo a%d = %d\n", n, an);
 
				        n++;
 
				    } while (an < 50);
 
			break;

		case 7 : 

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

 
		

			break;

		case 8: 

					printf("Digite o valor de N: ");

				    scanf("%i", &n);

				     for (fatorial = 1; n > 0; n--){

				        if (n > 1) {

				            fatorial *= n;

				        }

				    }

				    printf("O fatorial de N eh: %i\n", fatorial);

			break;

		case 9:

					printf("Sequencia de fibonnaci \n");

				     while (numB < 200){

						printf("%i ", numB);

						fib = numA + numB;

						numA = numB;

						numB = fib;


					}

			break;

		case 10:

					printf("Sequencia de fibonacci: ");

					for (;numB < 200;){

					printf("%i ", numB);	

							fib = numA + numB;

							numA = numB;

							numB = fib;

					}
 
			break;

		case 11:

 
				    printf("Digite o valor do primeiro termo (a1): ");

				    scanf("%d", &a1);

				    printf("Digite a razao (r): ");

				    scanf("%d", &r);

					while (an < 50){

				        an = a1 + (n - 1) * r;

				        printf("Termo a%d = %d\n", n, an);

				        n++;

				    } 

			break;

		case 12:

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

			break;


		case 13: printf("voce saiu");

			break;

						default: printf("Escolhe uma opcao de 1 a 4");

		}

	}while (opcao != 13);

}
 
 
