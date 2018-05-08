// Lab01-Exc07.c

#include <stdio.h>
#include <string.h>
int main (void) {

char time[10];
int mais_pto = 0;
int menos_pto = 104;
char time_mais_pto[10];
char time_menos_pto[10];
int v,e,d,pto;
int i = 0;
while (i < 3) {
	printf("Time: ");
	scanf("%s",time);
	printf("Vitórias ");
	scanf("%d",&v);
	printf("Empates: ");
	scanf("%d",&e);
	printf("Derrotas: ");
	scanf("%d",&d);
	pto = ((3*v) + e);
	printf("pontos: %d\n", pto);

	if (pto > mais_pto) {
		mais_pto = pto;
		strcpy(time_mais_pto, time);
	}
	else {
		if (pto < menos_pto) {
			menos_pto = pto;
			strcpy(time_menos_pto, time);
		}
	}
	i = (i+1);
}
printf("primeiro colocado: %s com %d pontos\n", time_mais_pto, mais_pto);
printf("Último colocado: %s com %d pontos\n", time_menos_pto, menos_pto);
return 0;
}
		
