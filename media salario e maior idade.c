#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

setlocale(LC_ALL, "");
 
char nome, sexo, resposta[200]; 
float salario, somaSalario = 0, mediaSalario;
int quantidadeMulheres = 0, opcao, idade, maiorIdade = 0, menorIdade = 999;
 
 do {
 

printf("escolha a opção:\n");

printf("1. Adicionar pessoa\n");

printf("2. Exibir resultados e sair\n");

printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch(opcao) {
case 1 : 

 printf("\nDigite sua idade: ");
 scanf("%i", &idade); 

  

if (idade > maiorIdade ) {
	
	maiorIdade = idade;
}

if (idade < menorIdade ) {
	
	menorIdade = idade;
	
}



 printf("\nDigite seu sexo - M ou F: ");
 scanf("%s", &sexo);
 
 printf("\nDigite seu salario: ");
 scanf("%f", &salario);
 
 
 

if ( sexo == 'F' && salario >= 5000) {
	
	quantidadeMulheres++; 
}

somaSalario += salario; 
break; 

case 2  : 

if(somaSalario == 0) {
	
	printf("\n Nenhum dado foi inserido.");
}else {
	mediaSalario = somaSalario / (float)opcao;
	printf("\nMédia de salario do grupo: %.2f\n", mediaSalario);
	printf("Maior idade do grupo: %d\n", maiorIdade);
	printf("Menor idade do grupo: %d\n", menorIdade);
	printf("Quantidade de mulheres com salario a partir de R$ 5.000,00: %d\n", quantidadeMulheres);
	
}

break;
default:
	printf("\nOpção invalida. Tente novamente.\n");
}
}while(opcao != 2); 


 
 
 

   

return 0;

}
