#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i;
    
    printf("Mostrando os n�meros pares entre 100 e 120: \n");
	for(i = 100; i <= 120; i++) {
		if (i % 2 == 1) {
			printf("%d \n", i);
			
	}
	}
	return 0;
}

