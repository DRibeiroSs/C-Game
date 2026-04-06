#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include "jogos.h"

void SegJogo(){
	
	Limpar();
	int botao, cobra, escolha;
	char JogarD;
	int Primeiro; //variavel pra definir quem comeca primeiro
	int ValNomes;
	
	do{
		Limpar();
		printf("===== COBRA NA CAIXA =====\n\n");
		printf("Cuidado!!!\nVoce caiu em uma tumba egipicia voce e seu colega explorador ficaram presos nela\nmas no meio da sala tem cinco caixas...\numa delas contem um botao que vai abrir a porta\nmas em uma das outras quatro havera uma cascavel ou quem sabe nada...\n");
		sleep(5);
		
		//variaveis dos nomes
		char Nome1;
		char Nome2;
		
		//Usuario vai escolher um nome
		do {
			printf("\nEscolha um nome para continuar...\n");
			printf("A) Giovanna\n");
			printf("B) Pedro Girotto\n");
			printf("C) Davi\n");
			printf("D) Victor Hugo\n");
			printf("E) Felipe\n");
			printf("F) Pedro Arthur\n");
			printf("G) Ricardo Casseb\n");
			
			scanf(" %c", &Nome1);
			scanf(" %c", &Nome2);
			
			Nome1 = toupper(Nome1);
			Nome2 = toupper(Nome2);
			
			if(Nome1 >= 'A' && Nome1 <= 'G' && Nome2 >= 'A' && Nome2 <= 'G'){
				// Confere se as letras sao iguais
				if(Nome1 == Nome2) {
					printf("Opcao invalida... Os jogadores nao podem escolher o mesmo nome!\n");
					ValNomes = 1;
					sleep(3);
					Limpar();
				} else {
					ValNomes = 0; // Tudo certo, pode continuar
				}
			} else {
	    		printf("Opcao invalida... Digite apenas letras de A ate G.\n");
				ValNomes = 1;
				sleep(3);
				Limpar();
			}
		} while (ValNomes == 1);
		
		Primeiro = rand() % 2;
		printf("\nDecidindo quem vai comecar...\n");
		sleep(2);
		Limpar();
		
		do {
			botao = (rand() % 5) + 1;
			do{
				cobra = (rand() % 5) + 1;
			}while (cobra == botao);
			
			char Jog;
			if (Primeiro == 0){
				Jog = Nome1;
			} else {
				Jog = Nome2;
			}
			
			printf("\nVez do jogador(a) ");
			if(Jog == 'A') printf("Giovanna");
			else if(Jog == 'B') printf("Pedro Girotto");
			else if(Jog == 'C') printf("Davi");
			else if(Jog == 'D') printf("Victor Hugo");
			else if(Jog == 'E') printf("Felipe");
			else if(Jog == 'F') printf("Pedro Arthur");
			else if(Jog == 'G') printf("Ricardo Casseb");
			printf("!!\n");
			
			printf("\nAs 5 caixas estao na sua frente...\n");
			printf("     [1]  [2]  [3]  [4]  [5]\n");
			printf("Escolha uma das caixas, mas cuidado...\n\n");
			
			if (scanf("%i", &escolha) != 1 || escolha < 1 || escolha > 5){
				while(getchar() != '\n');
				printf("Opcao invalida! Por favor, escolha apenas numeros de 1 a 5.\n");
				sleep(2);
				Limpar();
				continue;
			}
			
			if(escolha == cobra){
				if(Jog == 'A') printf("Giovanna achou a cascavel e perdeu!\n");
				else if(Jog == 'B') printf("Pedro Girotto achou a cascavel e perdeu!\n");
				else if(Jog == 'C') printf("Davi achou a cascavel e perdeu!\n");
				else if(Jog == 'D') printf("Victor Hugo achou a cascavel e perdeu!\n");
				else if(Jog == 'E') printf("Felipe achou a cascavel e perdeu!\n");
				else if(Jog == 'F') printf("Pedro Arthur achou a cascavel e perdeu!\n");
				else if(Jog == 'G') printf("Ricardo Casseb achou a cascavel e perdeu!\n");
				sleep(2);
				Limpar();
				break; 
				
			} else if(escolha == botao){
				if(Jog == 'A') printf("Giovanna achou o botao e a saida! Uhull!\n");
				else if(Jog == 'B') printf("Pedro Girotto achou o botao e a saida! Uhull!\n");
				else if(Jog == 'C') printf("Davi achou o botao e a saida! Uhull!\n");
				else if(Jog == 'D') printf("Victor Hugo achou o botao e a saida! Uhull!\n");
				else if(Jog == 'E') printf("Felipe achou o botao e a saida! Uhull!\n");
				else if(Jog == 'F') printf("Pedro Arthur achou o botao e a saida! Uhull!\n");
				else if(Jog == 'G') printf("Ricardo Casseb achou o botao e a saida! Uhull!\n");
				sleep(2);
				Limpar();
				break; 
				
			} else {
				printf("A caixa esta vazia... As caixas vao se embaralhar novamente!\n");
				
				if (Primeiro == 0) {
					Primeiro = 1;
				} else {
					Primeiro = 0;
				}
				
				sleep(3);
				Limpar();
			}
		} while(1); 
		
		printf("\nDeseja jogar novamente? (S/N): ");
		scanf(" %c", &JogarD);
	}while(JogarD == 's' || JogarD == 'S');
}
