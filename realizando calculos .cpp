#include <stdio.h>

int main() {
// Declarando variáveis.
float primeiroNumero, segundoNumero;
float soma, subtracao, multiplicacao, divisao;

// Solicitando dados para o usuário.
printf("Digite o primeiro numero: ");
scanf("%f", &primeiroNumero);

printf("Digite o segundo numero: ");
scanf("%f", &segundoNumero);

// Realizar cálculos.
soma = primeiroNumero + segundoNumero;
    subtracao = primeiroNumero - segundoNumero;
    multiplicacao = primeiroNumero * segundoNumero;
    divisao = primeiroNumero / segundoNumero;

fflush(stdin); // Limpa o cache de input.

// Exibindo resultados.
printf("\n=== Exibindo resultados ===\n");
printf("\nPrimeiro numero: %f", primeiroNumero);
    printf("\nSegundo numero: %f", segundoNumero);
    printf("\nSoma: %f", soma);
    printf("\nSubtracao: %f", subtracao);
    printf("\nMultiplicacao: %f", multiplicacao);
    printf("\nDivisao: %f", divisao);
   
    getchar();
   
    return 0;
