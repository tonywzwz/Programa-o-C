#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
   
    int valor, somaGeral = 0, somaPares = 0,somaImpares = 0, contadorGeral = 0;
    int pares = 0, impares = 0;
    float mediaGeral, mediaPares, mediaImpares;
   
    printf("Digite um n�mero: ");
    scanf("%i",&valor);
   
    while (valor != 0) {
        if (valor > 0) {
            contadorGeral++;
            somaGeral += valor;
           
            if (valor % 2 == 0) {
                // pares = pares + 1;
                pares++;
               
                //somaPares = somaPares + valor;
                somaPares += valor;
                
            } if(valor % 2 == 1) {
                
				impares++;
                
				somaImpares += valor;  
                
            }
        }        
            printf("Digite um n�mero: ");
            scanf("%i",&valor);
    }
   
    if (contadorGeral == 0) {
        printf("N�o foi informado um n�mero positivo.");
    } else {
        // cast
        // 2 -> 2.0
        mediaGeral = somaGeral / (float) contadorGeral;
        mediaPares = somaPares / (float) pares;
        mediaImpares = somaImpares / (float) impares;
        printf("Quantidade de pares: %i \n", pares);
        printf("Quantidade de �mpares: %i \n", impares);
        printf("M�dia geral: %.1f \n", mediaGeral);
        printf("M�dia de n�meros pares: %.1f \n", mediaPares);
        printf("M�dia de n�meros impares: %.1f \n", mediaImpares);
	}
   
    return 0;
}
