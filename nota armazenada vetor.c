#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
#define TAM 3
 
 int main () {  
 		setlocale(LC_ALL, "");
 	
 	float media, soma;
	float notas[TAM];
 	int i;
 	
printf("Digite suas notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: ", i + 1);
		scanf ("%f",&notas[i]);
		
		soma += notas[i];
		
		}
		
		media = soma / (float) i;
		
		for (i = 0; i < 3; i++) {
		printf("\nNotas Armazenadas %d: %.1f \n", i+1, notas[i]);
		}
	    printf("\n Sua m�dia: %.2f", media);
	    
		if (media >= 7 ){
		printf("\n Voc� foi Aprovado!!");
		}

		if (media <= 6.90) {
			printf("\n Voc� estar na recupera��o!!");
		}
		
		if (media <= 5){
		printf("\n Voc� foi Reprovado!!");
		}
		
 
	return 0;
}
