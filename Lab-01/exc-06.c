// lab01-exc06.c

#include <stdio.h>
int main (void) {
	int num;
	printf("digite um numero: ");
	scanf("%d", &num);
	int i = 1;
	int soma = 0;
	while (i <= num) {
		soma = (soma + (i*i));
		i = (i + 1);
		}
	printf("O somatório é %d\n", soma);
	return 0;
} 

