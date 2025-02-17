#include <stdio.h>

int main() {
    char disciplina1[50], disciplina2[50], disciplina3[50];
    float nota1_1, nota1_2, nota2_1, nota2_2, nota3_1, nota3_2;
    float media1, media2, media3;

    // Recebendo informações da primeira disciplina
    printf("Digite o nome da primeira disciplina: ");
    fgets(disciplina1, 50, stdin);
    printf("Digite a primeira nota da disciplina %s: ", disciplina1);
    scanf("%f", &nota1_1);
    printf("Digite a segunda nota da disciplina %s: ", disciplina1);
    scanf("%f", &nota1_2);

    // Limpa o buffer do teclado
    while (getchar() != '\n');

    // Recebendo informações da segunda disciplina
    printf("Digite o nome da segunda disciplina: ");
    fgets(disciplina2, 50, stdin);
    printf("Digite a primeira nota da disciplina %s: ", disciplina2);
    scanf("%f", &nota2_1);
    printf("Digite a segunda nota da disciplina %s: ", disciplina2);
    scanf("%f", &nota2_2);

    // Limpa o buffer do teclado
    while (getchar() != '\n');

    // Recebendo informações da terceira disciplina
    printf("Digite o nome da terceira disciplina: ");
    fgets(disciplina3, 50, stdin);
    printf("Digite a primeira nota da disciplina %s: ", disciplina3);
    scanf("%f", &nota3_1);
    printf("Digite a segunda nota da disciplina %s: ", disciplina3);
    scanf("%f", &nota3_2);

    // Calculando médias
    media1 = (nota1_1 + nota1_2) / 2;
    media2 = (nota2_1 + nota2_2) / 2;
    media3 = (nota3_1 + nota3_2) / 2;

    // Exibindo os resultados
    printf("\nNome da disciplina: %s", disciplina1);
    printf("1ª nota: %.1f\n", nota1_1);
    printf("2ª nota: %.1f\n", nota1_2);
    printf("Média: %.1f\n", media1);

    printf("\nNome da disciplina: %s", disciplina2);
    printf("1ª nota: %.1f\n", nota2_1);
    printf("2ª nota: %.1f\n", nota2_2);
    printf("Média: %.1f\n", media2);

    printf("\nNome da disciplina: %s", disciplina3);
    printf("1ª nota: %.1f\n", nota3_1);
    printf("2ª nota: %.1f\n", nota3_2);
    printf("Média: %.1f\n", media3);

    return 0;
}
