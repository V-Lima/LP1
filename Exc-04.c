// lab01-exc04.c

#include <stdio.h>

int main (void) {
	int vel;
	printf("Velocidade: ");
	scanf("%d", &vel);
	if (vel > 100) {
		printf("DESACELERE!\n");
	} else {
		if (vel < 80) {
			printf("ACELERE!\n");
		} else {
			printf("MANTENHA!\n");
		}
	}
	return 0;
}
	
