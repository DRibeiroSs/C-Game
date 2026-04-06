#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "utils.h"

void limpar() {
	system("cls");
}

int scanfInt(int *destino) {
	if (scanf("%d", destino) != 1) {
		while(getchar() != '\n');
		
		printf("Opcao Invalida! digite novamente: ");
		sleep(2);
		scanfInt(destino);
	}
}
