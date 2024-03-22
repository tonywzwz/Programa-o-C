#include <stdio.h>

int main() {
char nome[200];
int idade;
float notaUm, notaDois, notaTres, notaQuatro, media;

printf("Digite seu nome: ");
scanf("%s", &nome);

printf("Digite sua idade: ");
scanf("%i", &idade);

    printf("Digite a primeira nota: ");
    scanf("%f", &notaUm);
   
    printf("Digite a segunda nota: ");
    scanf("%f", &notaDois);
   
    printf("Digite a terceira nota: ");
    scanf("%f", &notaTres);
   
    printf("Digite a quarta nota: ");
    scanf("%f", &notaQuatro);
   
   media = notaUm + notaDois + notaTres + notaQuatro / 4;
   
   fflush(stdin);
   
   printf("\n=== Exibindo resultados ===\n");
   printf("\nNome: %s \n", nome);
   printf("\nIdade: %i \n", idade);
   printf("\nPrimeira nota: %.2f \n", notaUm);
   printf("\nSegunda nota: %.2f \n", notaDois);
   printf("\nTerceira nota: %.2f \n", notaTres);
   printf("\nQuarta nota: %.2f \n", notaQuatro);
   printf("\nMedia: %.2f \n", media);
   
   getchar();
   
   return 0;
   
}


