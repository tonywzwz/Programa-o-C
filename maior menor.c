#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int notaUm, notaDois, soma, produto;
	int maiorValor, menorValor; 
	float media; 

	printf("Digite o primeiro n�mero: ");
	scanf("%i", &notaUm);
    
     fflush(stdin);
    
	printf("Digite o segundo n�mero: ");
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
	printf("Primeiro n�mero: %i \n", notaUm);
	printf("Segundo n�mero: %i \n\n", notaDois);
	printf("Soma: %i \n", soma);
	printf("Produto: %i \n", produto); 
	printf("M�dia: %.1f \n\n", media);
	
	if (notaUm == notaDois){
		printf("Os n�meros s�o iguais.");
	}
	
	else 
	
	{ 
	printf("Maior n�mero: %i \n", maiorValor);
	printf("Menor n�mero: %i \n", menorValor); 

	}
 

return 0; 
}






