// 02-maior_valor.c

#include <stdio.h>

int main (void) {
	int num_1;
	printf("Escolha um numero: ");
	scanf("%d", &num_1);
	int num_2;
	printf("Escolha um numero: ");
	scanf("%d", &num_2);
	if (num_1 > num_2) {
		printf("O primeiro é maior. \n");
	} else {
	  printf("o segundo é maior. \n");
	}
	return 0;
}
