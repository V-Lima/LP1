#include <stdio.h>
int eh_primo (int j) {
	int i = 2;
	while (i <= j/2) {
        	if (j % i == 0) {
             		return 0;
          	}
		i = i + 1;
	}
	return 1;
}

int todos_os_primos (int max ) {
	int j = 1;
	while (j < max) {
		int primo = eh_primo(j);
		if (primo == 1) {
			printf("%d\n",j);
		}
		j = (j + 1);
	}
	return 0;
}

int main (void) {
	int Max;
	printf("Numero: ");
	scanf("%d", &Max);
	int primos = todos_os_primos(Max);
	printf("%d\n", primos);
} 
