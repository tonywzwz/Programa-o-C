#include <stdio.h>
#include <locale.h>

#define TAMANHO 5

int main() {
setlocale(LC_ALL, "");
int idades [TAMANHO];
char nomes[TAMANHO] [ 200];
int i;

printf(" === Solicitando dados para o usuario === \n");
for (i = 0; i < TAMANHO; i++) {
printf("Digite o %iº nome: ", i+1);
scanf("%s",&nomes[i]);

printf("Digite a %iª idade: ", i+1);
scanf("%i", &idades[i]);

printf("\n");
}
printf("\n === Exibindo dados para o usuario === \n");
for (i = 0; i < TAMANHO; i++) {
printf("iº nome: %s \n", i+1, nomes[i]);
printf("iª idade: %i \n\n", i+1, idades[i]);
}

return 0;
}

