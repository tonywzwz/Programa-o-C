#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
	int i;
	
    printf("\nTabuada da multiplicação do número 2\n");
	for(i = 1; i <= 10; i++) {
		printf("%d x %d = %d \n", 2, i, i*2);
		
	}	
	
    printf("\nTabuada de multiplicação do número 3 \n");
    for(i = 1; i <= 10; i++) {
    printf("%d x %d = %d \n", 3, i, i*3);
	}	

    return 0;
    
}
