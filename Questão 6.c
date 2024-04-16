#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a1, a2, a3, mp, mf, af;
	printf("Digite sua primeira nota: ");
	scanf("%f", &a1);
	printf("\nDigite sua segunda nota: ");
	scanf("%f", &a2);
	printf("\nDigite sua terceira nota: ");
	scanf("%f", &a3);
	
	mp = (a1 + a2 + a3)/3;
	
	if(mp >= 7.0){
		printf("\n\nVocê obteve média %.1f e está aprovado!", mp);
	} else if(mp > 3.5 && mp < 7.0){
		printf("\n\nVocê obteve média %.1f e precisa fazer a Avaliação Final!", mp);
		printf("\nDigite sua nota na Avaliação Final: ");
		scanf("%f", &af);
		mf = ((6 * mp) + (4 * af))/10;
		if(mf >= 5.0){
			printf("\nVocê obteve Media Final %.1f e está aprovado!", mf);
		} else{
			printf("\nVocê obteve Media Final %.1f e está reprovado!", mf);
		}
	} else{
		printf("\n\nVocê obteve média %.1f e está reprovado!", mp);
	}
	return(0);
}
