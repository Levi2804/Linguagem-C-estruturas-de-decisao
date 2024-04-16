#include<stdio.h>
#include<locale.h>
/*
A determinação da divisibilidade de um número por outro é importante na
programação. Sabendo disso, crie um programa que solicita e lê dois números
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	printf("Digite um número para o numerador: ");
	scanf("%i", &n);
	printf("Digite um número para o denominador: ");
	scanf("%i", &d);
	
	if(d == 0){
		printf("\nA divisão é indefinida!");
	} else{
		if(n % d ==0){
			printf("\n%i é divisível por %i", n, d);
		} else{
			printf("\n%i não é divisível por %i", n, d);
		}
	}
	return(0);
}
