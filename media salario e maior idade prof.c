#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>

int main() {
setlocale(LC_ALL, "");

int opcao, contadorSalario = 0, mulheres5k = 0;
int idade, maiorIdade = INT_MIN, menorIdade = INT_MAX;
float salario, somaSalario = 0, mediaSalario;
char sexo;

do {
printf(" -== MENU === \n");
printf("1 - Adicionar pessoa \n");
printf("2 - Exibir resultado e sair \n");
printf("Digite a opcao desejada: ");
scanf("%i",&opcao);

switch (opcao) {
case 1:
printf("Digite a idade: \n");
scanf("%i",&idade);

fflush(stdin);
printf("Digite o sexo - M ou F: \n");
scanf("c",&sexo);

printf("Digite o salario: \n");
scanf("%f",&salario);

fflush (stdin);
sexo - toupper (sexo); 

if (idade > maiorIdade) {
maiorIdade - idade;
}

if (idade < menorIdade) {
menorIdade = idade;
}
contadorSalario++;
somaSalario += salario;

if (sexo == 'F' && salario >= 5000) {
mulheres5k++;

}
break;
case 2:
break;
default:
printf("\nOpção invalida! \n");
sleep(4);
system("cls || clear");
}
} while (opcao != 2);

mediaSalario = somaSalario / contadorSalario;

printf(" === Exibindo resultados === \n");
printf("Media salarial do grupo: %.2f \n", mediaSalario);
printf("Maior idade: %i \n", maiorIdade);
printf("Menor idade: %i \n", menorIdade);
printf("Quantidade de mulheres com salario acima de 5 mil");


return 0;
}
