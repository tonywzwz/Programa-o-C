#include<stdio.h>
#include<locale.h>
#define TAM 5
int main(){
	
	setlocale(LC_ALL,"");
	
	int i = 0, pares = 0, impares = 0;
	int negativo = 0, positivo = 0, contadorGeral = 0, contador = 0;
	int numero;
	
	do{
	
		
		printf("Digite o [%d]° valor: ", i + 1);
		scanf("%i", &numero);

		if  (numero < 0 ) {
		
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
	} while( numero != 0);
    
    
	
	printf("\nQuantidade de números negativos: %i", negativo);
	printf("\nQuantidade de números positivos: %i", positivo);
	printf("\nQuantidade de números impares: %i", impares);
	printf("\nQuantidade de números pares: %i", pares);
	printf("\nQuantidade de números inseridos: %i", contador);	
	    
    return 0;
}
