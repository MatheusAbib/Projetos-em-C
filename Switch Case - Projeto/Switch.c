#include <stdio.h>

int main(){
	
	//as vari�veis s�o todas declaradas aqui, at� as dos cases
	
	int selecionar;
	
	printf("Bem Vindo!!\n");
	printf("Selecione o tipo de atendimento\n");
	printf("1 - Banho e Tosa\n");
	printf("2 - Tosa\n");
		scanf("%i", &selecionar);
	
	switch(selecionar){
		case 1: printf("Voce escolheu banho");
			break;
		case 2: printf("Voce escolheu tosa");
			break;
		default: ("Voce n�o escolheu nenhum");
	}	
}
