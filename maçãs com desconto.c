#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	
    setlocale(LC_ALL, "");	
	
	int totalComprado, calculo, desconto, calculoSemdesconto;
	
	printf("Digite o n�mero de ma��s: ");
	scanf("%i", &totalComprado);
	
	  
	 
	 if(totalComprado >=12 ) {
	 	
	 	calculoSemdesconto = totalComprado * 1.30;
	 	calculo = totalComprado * 1;
	 	desconto = calculoSemdesconto - calculo;
		 
	 	
	 	
	 	printf(" === VALORES === ");
	 	printf("\nPre�o por unidade: R$1.30");
	 	printf("\nPre�o a cima de 11 unidades: R$ 1.00");
	 	printf("\nTotal a pagar s\ desconto: R$%i", calculoSemdesconto);
	 	printf("\nDesconto: R$%i", desconto);
	 	printf("\nTotal a pagar c\ desconto: R$%i", calculo); 
	 	
	 	}else{
	 		
	 		calculo = totalComprado * 1.30;
	 		
	 		printf("=== VALORES ===");
	 		printf("\nPre�o por unidade: R$ 1.30");
	 		printf("\nTotal a pagar: R$%i", calculo);
	 		
		 }
	 	
	 	
	 	
	 	
	 	
	 }	
		
 
