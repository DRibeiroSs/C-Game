#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "utils.h"

void limparBuffer() {
	while(getchar() != '\n');
}

void limpar() {
	system("cls");
}
