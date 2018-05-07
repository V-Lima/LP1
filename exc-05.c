
// lab01-exc05.c

#include <stdio.h>
int main (void) {
	int num;
	int soma = 0;
	while (num != 0) {		
		printf("digite um numero: ");
		scanf("%d", &num);
		soma = (soma + num);
		}
	printf("valor da soma é %d\n", soma);
	return 0;
}

