#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>
#include "segundo_jogo.h"

void segundoJogo() {
	limpar();
	char nome1[20];
	char nome2[20];
	char jogAtualNome[20];

	int botao, cobra, escolha;
	char jogarDeNovo;
	int jogAtual; //variavel pra definir quem comeca primeiro
	srand(time(NULL));
	
	printf("===== COBRA NA CAIXA =====\n\n");
	printf("Cuidado!!!\nVoce caiu em uma tumba egipicia voce e seu colega explorador ficaram presos nela\nmas no meio da sala tem cinco caixas...\numa delas contem um botao que vai abrir a porta\nmas em uma das outras quatro havera uma cascavel ou quem sabe nada...\n");
	sleep(5);
		
	//variaveis dos nomes
	coletarNomeJogador(&nome1);
	coletarNomeJogador(&nome2);
		
	printf("\nDecidindo quem vai comecar...\n");
	//esse rand eh pra "randomizar" um numero como ta dois, ele so pega 2 elementos como 0 e 1 oq soma 2
	jogAtual = rand() % 2;
	sleep(2);
	limpar();

	//Esse +1 nao eh atoa, ele ta ai pra n deixar ficar com 0, consequentemente vai ficar de 1 a 5 a roleta
	botao = (rand() % 5) + 1;
	//Esse rand da variavel cobra eh pra q nunca fique a cobra e o botao no mesmo lugar
	do {
		cobra = (rand() % 5) + 1;	
	} while (cobra == botao);


	while (1) {
		limpar();
		
		if (jogAtual == 0) {
			strcpy(jogAtualNome, nome1);
		} else {
			strcpy(jogAtualNome, nome2);
		}
			
		printf("\nVez do(a) jogador(a) ");
		printf(jogAtualNome);
		printf("\n");
		escolha = coletarRespostaCaixas();
		
		if (escolha == cobra) {
			limpar();
			printf("\nO Jogador [");
			printf(jogAtualNome);
			printf("] Achou a Cascavel e PERDEU!!\n");
			sleep(3);
			break;
		}
		
		if (escolha == botao) {
			limpar();
			printf("\nO Jogador [");
			printf(jogAtualNome);
			printf("] Achou o botao e GANHOU!!\n");
			sleep(3);
			break;
		}
		
		printf("\nJogador [");
		printf(jogAtualNome);
		printf("] Essa caixa estava vazia!!\n");
		sleep(3);
		
		if (jogAtual == 0) {
			jogAtual = 1;
		} else if (jogAtual == 1) {
			jogAtual = 0;
		}
		
	}
	
	
	//VOLTAR PRO MENU OU JOGAR DNV
	printf("\nDeseja jogar novamente? (S/N): ");
	scanf(" %c", &jogarDeNovo);
	if (jogarDeNovo == 's' || jogarDeNovo == 'S') {
		segundoJogo();
	} else {
		menuPrincipal();
	}
	
}

void coletarNomeJogador(char *nome) {
	int opcao;
	
	limpar();
	//Usuario vai escolher um nome		
	printf("\nEscolha um nome para continuar...\n");
	printf("1) Giovanna\n");
	printf("2) Pedro Girotto\n");
	printf("3) Davi\n");
	printf("4) Victor Hugo\n");
	printf("5) Felipe\n");
	printf("6) Pedro Arthur\n");
	printf("7) Ricardo Casseb\n");
	
	if (scanf("%d", &opcao) != 1) {
		limparBuffer();
		
		printf("Opcao Invalida!");
		sleep(2);
		menuPrincipal();
	}
	
	if (opcao == 1) {
		strcpy(nome, "Giovanna");
	} else if (opcao == 2) {
		strcpy(nome, "Pedro Girotto");
	} else if (opcao == 3) {
		strcpy(nome, "Davi");
	} else if (opcao == 4) {
		strcpy(nome, "Victor Hugo");
	} else if (opcao == 5) {
		strcpy(nome, "Felipe");
	} else if (opcao == 6) {
		strcpy(nome, "Pedro Arthur");
	} else if (opcao == 7) {
		strcpy(nome, "Ricardo Casseb");
	} else {
		printf("Opcao invalida...\n");
		sleep(3);
		coletarNomeJogador(nome);
	}

}

int coletarRespostaCaixas() {
	int escolha;
	
	printf("\nAs 5 caixas estao na sua frente...\n");
	printf("     [1]  [2]  [3]  [4]  [5]\n");
	printf("Escolha uma das caixas, mas cuidado...\n\n");
	
	//ISSO AQUI EH PRA NGM QUEBRAR O CODIGO COLOCANDO UM CARACTER Q N ERA PRA SER COLOCADO.
	if (scanf("%i", &escolha) != 1 || escolha < 1 || escolha > 5) {
		while(getchar() != '\n');
		printf("Opcao invalida! Por favor, escolha apenas numeros de 1 a 5.\n");
		sleep(2);		
	}
	
	return escolha;

}

