#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n?mero inteiro: ");
	printf("Digite um número inteiro: ");
	scanf("%i", &n);

	if(n > 0){
		printf("\n%i ? positivo!", n);
	(n > 0) ? printf("\n%i é positivo!", n) : 
		(n == 0) ? printf("\n0 é neutro!") : 
			printf("\n%i é negativo", n);
	}

	//Antes
	/*if(n > 0){
		printf("\n%i é positivo!", n);
	} else if(n == 0){
		printf("\n0 ? neutro!");
		printf("\n0 é neutro!");
	}else{
		printf("\n%i ? negativo", n);
	}
		printf("\n%i é negativo", n);
	}*/
	
	return(0);
}
