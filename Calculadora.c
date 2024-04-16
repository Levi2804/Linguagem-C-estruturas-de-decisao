#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	int opcao;
	printf("=======================");
	printf("\nCalculadora\n");
	printf("=======================");
	
	printf("\n1 - soma");
	printf("\n2 - subtração");
	printf("\n3 - multiplicação");
	printf("\n4 - divisão");
	printf("\n=======================");
	
	printf("\nEscolha uma opção: ");
	scanf("%i", &opcao);
	switch(opcao){
		case 1:
			printf("\nDigite um número para a soma: ");
			scanf("%f", &n1);
			printf("Digite outro número para a soma: ");
			scanf("%f", &n2);
			printf("\nO resultado da soma é: %.1f", n1 + n2);
			break;
		case 2:
			printf("\nDigite um número para a subtração: ");
			scanf("%f", &n1);
			printf("Digite outro número para a subtração: ");
			scanf("%f", &n2);
			printf("\nO resultado da soma é: %.1f", n1 - n2);
			break;
		case 3:
			printf("\nDigite um número para a multiplicação: ");
			scanf("%f", &n1);
			printf("Digite outro número para a multiplicação: ");
			scanf("%f", &n2);
			printf("\nO resultado da soma é: %.1f", n1 * n2);
			break;
		case 4:
			printf("\nDigite o numerador da divisão: ");
			scanf("%f", &n1);
			printf("Digite o denominador da divisaõ: ");
			scanf("%f", &n2);
			if(n2 == 0){
				printf("\nA divisão é indefinida!");
			} else{
				printf("\nO resultado da soma é: %.1f", n1 / n2);
			}
			break;
		default:
			printf("\nOpção inválida");
			break;
	}
	return(0);
}
