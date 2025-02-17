#include<stdio.h>
#include<locale.h>
#include<ctype.h>


int main (){

setlocale (LC_ALL,"");

char alunos[3][200];
float notas[3][2], somaNotas = 0;
int i, j;
float media[2], soma = 0;

printf(" === Solicitando dados para o usuario === \n");
for (i = 0; i < 3; i++) {
printf("Digite o nome do %iº aluno: ", i+1);
scanf("%s", &alunos[i]);

for (j = 0; j < 2; j++) {
printf("Digite a %iª nota: ", j+1);
scanf("%f", &notas [i][j]);

soma += notas [i][j];

		}


		media[i] = soma /2;
		soma = 0;

printf("\n");

}

printf("\n === Exibindo dados para o usuario === \n");
for (i = 0; i < 3; i++) {
printf("%iº aluno: %s \n", i+1, alunos[i]);

for (j = 0; j < 2; j++) {
printf("%ia nota: %.1f \n", j+1, notas[i][j]);
}
printf("Media: %.1f \n", media[i]);
printf("\n");

}

return 0;

}
