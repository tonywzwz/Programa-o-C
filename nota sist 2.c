#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main() {
setlocale(LC_ALL, "");

float nota, soma = 0, media;
int contador = 0;
char resposta;

do {
printf("Digite uma nota: ");
scanf("%f",&nota);

fflush(stdin);

system("cls || clear");
printf("Escolha uma das op�oes abaixo: \n");
printf("S - Inserir mais uma nota: \n");
printf("P - Ver quantidade de notas inseridas: \n");
printf("N - Calcular a media aritmetica: \n");
printf("Resposta: ");
scanf("%c",&resposta);
resposta = toupper(resposta);

soma += nota;
contador++;


switch(resposta) {
case 'S':
system("cls || clear");
break;
case 'P':
printf("\nQuantidade de notas inseridas: %i \n");
sleep(5);
system("cis ||clear");
break;
system("cls || clear");
printf("Escolha uma das op��es abaixo: \n");
printf("S - inserir mais uma nota: \n");
printf("P - Ver quantidade de notas inseridas: \n");
printf("N - calcular a m�dia aritimetica: \n");
printf("Resposta ");
scanf("%c", &resposta);

soma += nota; 
contador++;
}
switch(resposta) {
	
	case '5' :
	
	system("cls || clear");
	break;
	
	case 'P' :
	printf("\nQuantidade de notas inseridas: %i \n");
	sleep(5);
	
	system ("cls || clear");
	break;
	
	case 'N':
	
	system("cls || clear");
	break;
	
	default:
	
	printf("Op��o invalida: \n");
	sleep(5);
	system("cls || clear");
	
} }while(resposta != 'N');


  media = soma / contador;
  
  printf("\n === Exibindo resultados ===\n");
  printf("M�dia %.1f \n", media);
  
return 0;	
	


}




