#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char resultado[200];
	int nota = 0, soma = 0, i = 0;
	float media = 0;
	
	for (i = 1; i <4; i++){
		printf("Digite a %i° nota: ", i);
		scanf("%i",&nota);
		
		soma += nota;
	}
	
	media = soma / 3;
	
	if (media >= 7){
		strcpy(resultado, "Aprovado.");
	} else if (media >= 4) {
		strcpy(resultado, "Recuperação.");
	} else {
		strcpy(resultado, "Reprovado.");
	}
	
	printf("\nMédia: %.1f", media);
	printf("\n%s", resultado);
	
	return 0;
}
