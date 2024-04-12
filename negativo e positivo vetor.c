#include<stdio.h>
#include<locale.h>
#define TAMANHO 4

int main() {
setlocale(LC_ALL, "");
float numeros [TAMANHO], somaPositivos = 0;
int i, quantidadeNegativos = 0;

printf(" === Solicitando dados para o usuario === \n");
for (i = 0; i < TAMANHO; i++) {
printf("Digite o %iº número: ", i+1);
scanf("%f",&numeros[i]);
}
if (numeros[i] < 0) {
quantidadeNegativos++;
} else if (numeros[i] > 0) {
somaPositivos += numeros[i];

}

printf("\n === Exibindo dados para o usuario === \n");
for (i = 0; i < TAMANHO; i++) {
printf("%iº numero: %.1f \n", i+1, numeros[i]);

printf("\nQuantidade de numeros negativos: %i \n", quantidadeNegativos);
printf("Soma de numeros positivos: %.1f \n", somaPositivos);

return 0;
}
}
