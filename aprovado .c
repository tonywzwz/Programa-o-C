#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	
	char nome [50];
	
	float media, notaUno, notaDuo;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("\nDigite o primeiro valor: ");
scanf("%f", &notaUno);

printf("\nDigite o segundo valor: ");
scanf("%f", &notaDuo);

system("cls");

media = (notaUno + notaDuo) / 2;

printf("== RESULTADOS ==");
printf("\nNome: %s", nome);
printf("\nPrimeira Nota: %.1f", notaUno);
printf("\nSegunda Nota: %.1f", notaDuo);
printf("\nMédia: %.2f", media);


if (media >= 9){
printf("\nConceito: Aprovado(a)!");

}else if (media >= 7.5 && media < 9){
printf("\nConceito: Aprovado(a)!");

} else if (media >= 6 && media < 7.5){
printf("\nConceito: Aprovado(a)!");
} else {
printf("\nConceito: Reprovado(a)!");
}

return 0;


}


	

