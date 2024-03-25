#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
	int i;
	
    printf("\nTabuada da multiplicação do número 5\n");
	for(i = 1; i <= 10; i++) {
		printf("%d x %d = %d \n", 5, i, i*5);
}
    return 0;
    
}
