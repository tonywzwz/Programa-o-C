#include<locale.h>
#include<stdio.h>

int main() {
setlocale(LC_ALL, "");

int numeros[6];
int i, quantidadePares = 0, quantidadeImpares = 0;

printf(" === dados para o usuario === \n");
for (i = 0; i < 6; i++) {
printf("Digite o %i� n�mero: ", i+1);
scanf("%i",&numeros[i]);

    if (numeros[i] % 2 == 0) {
        quantidadePares++;
} else {
        quantidadeImpares++;

}

}

printf("\n === Exibindo dados para o usuario === \n");
for (i = 0; i < 6; i++) {
    printf("%i� n�mero: %i \n", i+1, numeros[i]);

printf("Quantidade de pares: %i \n", quantidadePares);
printf("Quantidade de �mpares: %i \n", quantidadeImpares);

return 0;
}
}
