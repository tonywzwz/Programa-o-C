#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");
int i, numero, pares = 0, impares = 0;

// Solicitando dados para o usu�rio.
for(i = 1; i <= 5; i++) {
printf("Digite o %i� n�mero: ",i);
scanf("%i",&numero);

if (numero % 2 == 0) {
pares = pares + 1;
} else {
impares++;
}
   }
printf("\n=== Exibindo resultados ===\n");
printf("Pares: %i \n", pares);
printf("�mpares: %i \n", impares);

   return 0;
}


