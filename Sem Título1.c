#include<stdio.h>
#include<locale.h>
#define TAM 5
int main(){
	
	setlocale(LC_ALL,"");
	
	int i = 0, pares = 0, impares = 0;
	int negativo = 0, positivo = 0, contadorGeral = 0, contador = 0;
	int numero [TAM];
	
	for(i = 0; i < TAM; i++) {
	
		
		printf("Digite o [%d]� valor: ", i + 1);
		scanf("%i", &numero[i]);

		if  (numero [i] < 0 ) {
		
			negativo++;
			
			} else {
				
			positivo++;

            }  
			
			if (i %  2 == 0) {
				
				pares++;
			
			} else {
				
				impares++;
           
		   }
    	
		contador++;
	}
    
    
	
	printf("\nQuantidade de n�meros negativos: %i", negativo);
	printf("\nQuantidade de n�meros positivos: %i", positivo);
	printf("\nQuantidade de n�meros impares: %i", impares);
	printf("\nQuantidade de n�meros pares: %i", pares);
	printf("\nQuantidade de n�meros inseridos: %i", contador);	
	    
    return 0;
}
