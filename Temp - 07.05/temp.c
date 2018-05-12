#include <stdio.h>

int main(void) {

int temps[5];
int soma = 0;
int i = 0;
while (i < 5) {
    int t;
    printf("Temperatura: ");
    scanf("%d", &t);
    temps[i] = t;
    soma = (soma + t);
    i = (i + 1);
    }
float media = ((soma)/5.0);
printf("A média é %f",media);
int j = 0;
while (j < 5) {
    if (temps[j] > media) {
        printf("\n %d, mais alta que a média.\n", temps[j]);
        }
	j = (j+1);
    }
    return 0;
}


