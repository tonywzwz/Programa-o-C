#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int notaUm, notaDois, soma, produto;
	int maiorValor, menorValor; 
	float media; 

	printf("Digite o primeiro número: ");
	scanf("%i", &notaUm);
    
     fflush(stdin);
    
	printf("Digite o segundo número: ");
	scanf("%i", &notaDois); 

	soma = notaUm + notaDois;
	produto = notaUm * notaDois; 
	media = (notaUm + notaDois) / 2.0;
	
	if (notaUm > notaDois ) {
		maiorValor = notaUm;
		menorValor = notaDois;	
	}
	
	else 
	
	{
	 maiorValor = notaDois;
	 menorValor = notaUm; 	
		
	}
	
	
	printf("\n=== Exibindo resultados === \n");
	printf("Primeiro número: %i \n", notaUm);
	printf("Segundo número: %i \n\n", notaDois);
	printf("Soma: %i \n", soma);
	printf("Produto: %i \n", produto); 
	printf("Média: %.1f \n\n", media);
	
	if (notaUm == notaDois){
		printf("Os números são iguais.");
	}
	
	else 
	
	{ 
	printf("Maior número: %i \n", maiorValor);
	printf("Menor número: %i \n", menorValor); 

	}
 

return 0; 
}






