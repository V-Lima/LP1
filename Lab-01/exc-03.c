// exc-03_dolares.c

#inluce <stdio.h>
int main (void) {
	float cel;
	printf("Valor do Celular: ");
	scanf("%f", &cel);
	if (cel*3.17 < 1000) {
		printf("BOM NEGÓCIO! \n");
	}
	return 0;
}
