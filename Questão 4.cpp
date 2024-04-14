#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float q;
	printf("Digite a quantidade de maçãs desejada: ");
	scanf("%f", &q);

	if(q < 12){
		printf("\nO valor a ser pago é: R$ %.2f", q * 1.30);
	} else if (q >= 12){
		printf("\nO valor a ser pago é: R$ %.2f", q * 1.10);
	}
	
	return(0);
}
