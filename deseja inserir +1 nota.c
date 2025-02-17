#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
	setlocale(LC_ALL,"");
	
int contador = 0;
char resposta;
float nota, soma, media; 
 
do {
	
	printf("Digite uma nota: ");
	scanf("%f", &nota);
	
	fflush(stdin);
	
	printf("\nDeseja inserir mais uma nota: ");
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	
	soma += nota;
	contador++;
	
} while(resposta != 'N');

media = soma / contador;

printf("\n=== Exibindo resultados ===\n");
printf("Média: %.1f \n", media);

return 0;
}
