#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");
   
float salario, quantidadeSalarios, salarioMinino = 1412.00;

printf("Digite o valor do sal�rio: ");
scanf ("%f", &salario);

quantidadeSalarios = salario / salarioMinino;

system("cls || clear"); // Limpa o terminal no Windows e Linux.

printf("'\n=== Exibindo resultados ===\n");


printf("Sal�rio informado: R$ %.2f \n", salario);
printf("Quantidade de sal�rios: %.1f \n", quantidadeSalarios);

return 0;

}
