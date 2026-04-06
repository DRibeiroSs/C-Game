#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "primeiro_jogo.h"
#include "segundo_jogo.h"
#include "terceiro_jogo.h"
#include "utils.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	system("color 6F");
	menuPrincipal();
}


int menuPrincipal() {
	limpar();
	
	int menu;

	printf("==== Game Of The Year ====\n\n");
	printf("1: Perguntas e Respostas\n");
	printf("2: Cobra na Caixa\n");
	printf("3: Gousmas War\n");
	printf("4: Sair\n");
		
	if (scanf("%d", &menu) != 1) {
		limparBuffer();
		
		printf("Opcao Invalida!");
		sleep(2);
		menuPrincipal();
	}
	
	if (menu == 1) {
		primeiroJogo();
	} else if (menu == 2) {
		segundoJogo();
	} else if (menu == 3) {
		terceiroJogo();
	} else if (menu == 4) {
		limpar();
		printf("Ja vai? :(");
	} else{
		printf("Opcao Invalida!");
		sleep(2);
		menuPrincipal();
	}
}


