#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i, numero, soma = 0;
    
    printf("Digite 5 n�meros inteiros: ");
    
    for (i = 1; i <= 5; i++) {
    	
    	printf("Digite o %i� n�mero: ", i );
    	scanf("%i", &numero);
    	
    	soma = soma + numero;
    	
	}
	
	printf("Soma: %i \n", soma);
	
	return 0;
	
	}
