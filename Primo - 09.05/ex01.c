#include <stdio.h>

int eh_primo (int n) {
	int i = 2;
	while (i < n/2) {
        	if (n % i == 0) {
             		return 0;
          	}
		i = i + 1;
	}
	return 1;
}
int main (void) {
	int N;
	printf("numero: ");
	scanf("%d", &N);
	int Primo = eh_primo(N);
	printf("%d\n",Primo);
}
