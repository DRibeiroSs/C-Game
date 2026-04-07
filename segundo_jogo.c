#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>
#include "segundo_jogo.h"

void segundoJogo(){
	
	limpar();
	int botao, cobra, escolha;
	char jogarNovamente;
	int Primeiro; //variavel pra definir quem comeca primeiro
	int ValNomes;
	srand(time(NULL));
	
	
	do{
		limpar();
		printf("===== COBRA NA CAIXA =====\n\n");
		printf("Cuidado!!!\nVoce caiu em uma tumba egipicia voce e seu colega explorador ficaram presos nela\nmas no meio da sala tem cinco caixas...\numa delas contem um botao que vai abrir a porta\nmas em uma das outras quatro havera uma cascavel ou quem sabe nada...\n");
		sleep(5);
		
		//variaveis dos nomes
		char Nome1;
		char Nome2;
		
		//Usuario vai escolher os nomes
		do {
			printf("\nEscolha dois nomes para continuar...\n");
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
			
			//isso e pra grantir q o usuario nao digite um valor invalido
			if(Nome1 >= 'A' && Nome1 <= 'G' && Nome2 >= 'A' && Nome2 <= 'G'){
				
				// Confere se as letras sao iguais
				if(Nome1 == Nome2) {
					printf("Opcao invalida... Os jogadores nao podem escolher o mesmo nome!\n");
					ValNomes = 1;
					sleep(3);
					limpar();
				} else {
					ValNomes = 0; // Tudo certo, pode continuar
				}
			} else {
	    		printf("Opcao invalida... Digite apenas letras de A ate G.\n");
				ValNomes = 1;
				sleep(3);
				limpar();
			}
		} while (ValNomes == 1);
		
		//rand para gerar um numero aleatorio
		Primeiro = rand() % 2;
		printf("\nDecidindo quem vai comecar...\n");
		sleep(2);
		limpar();
		
		do {
			// a randomizacao fica aq dentro
			// Assim, se a caixa for vazia, as posicoes embaralham para a proxima jogada.
			botao = (rand() % 5) + 1;
			do{
				cobra = (rand() % 5) + 1;
			}while (cobra == botao);
			
			// ISSO EH PRA SABER QUAL O NOME QUE O USUARIO ESCOLHEU E DE QUEM EH A VEZ
			char Jog;
			if (Primeiro == 0){
				Jog = Nome1;
			} else {
				Jog = Nome2;
			}
			
			printf("\nVez do jogador(a) ");
			if(Jog == 'A' || Jog == 'a') printf("Giovanna");
			else if(Jog == 'B' || Jog == 'b') printf("Pedro Girotto");
			else if(Jog == 'C' || Jog == 'c') printf("Davi");
			else if(Jog == 'D' || Jog == 'd') printf("Victor Hugo");
			else if(Jog == 'E' || Jog == 'e') printf("Felipe");
			else if(Jog == 'F' || Jog == 'f') printf("Pedro Arthur");
			else if(Jog == 'G' || Jog == 'g') printf("Ricardo Casseb");
			printf("!!\n");
			
			printf("\nAs 5 caixas estao na sua frente...\n");
			printf("     [1]  [2]  [3]  [4]  [5]\n");
			printf("Escolha uma das caixas, mas cuidado...\n\n");
			
			if (scanf("%i", &escolha) != 1 || escolha < 1 || escolha > 5){
				//esse getchar serve pra limpar buffer em caso de erro no scanf
				while(getchar() != '\n');
				printf("Opcao invalida! Por favor, escolha apenas numeros de 1 a 5.\n");
				sleep(2);
				limpar();
				continue;
			}
			
			if(escolha == cobra){
				if(Jog == 'A' || Jog == 'a') printf("Giovanna achou a cascavel e perdeu!\n");
				else if(Jog == 'B' || Jog == 'b') printf("Pedro Girotto achou a cascavel e perdeu!\n");
				else if(Jog == 'C' || Jog == 'c') printf("Davi achou a cascavel e perdeu!\n");
				else if(Jog == 'D' || Jog == 'd') printf("Victor Hugo achou a cascavel e perdeu!\n");
				else if(Jog == 'E' || Jog == 'e') printf("Felipe achou a cascavel e perdeu!\n");
				else if(Jog == 'F' || Jog == 'f') printf("Pedro Arthur achou a cascavel e perdeu!\n");
				else if(Jog == 'G' || Jog == 'g') printf("Ricardo Casseb achou a cascavel e perdeu!\n");
				sleep(2);
				limpar();
				break; // Sai do loop, jogo acabou
				
			} else if(escolha == botao){
				if(Jog == 'A' || Jog == 'a') printf("Giovanna achou o botao e a saida! Uhull!\n");
				else if(Jog == 'B' || Jog == 'b') printf("Pedro Girotto achou o botao e a saida! Uhull!\n");
				else if(Jog == 'C' || Jog == 'c') printf("Davi achou o botao e a saida! Uhull!\n");
				else if(Jog == 'D' || Jog == 'd') printf("Victor Hugo achou o botao e a saida! Uhull!\n");
				else if(Jog == 'E' || Jog == 'e') printf("Felipe achou o botao e a saida! Uhull!\n");
				else if(Jog == 'F' || Jog == 'f') printf("Pedro Arthur achou o botao e a saida! Uhull!\n");
				else if(Jog == 'G' || Jog == 'g') printf("Ricardo Casseb achou o botao e a saida! Uhull!\n");
				sleep(2);
				limpar();
				break; // Sai do loop, jogo acabou
				
			} else {
				printf("A caixa esta vazia... As caixas vao se embaralhar novamente!\n");
				
				// PASSA O TURNO PARA O OUTRO JOGADOR
				if (Primeiro == 0) {
					Primeiro = 1;
				} else {
					Primeiro = 0;
				}
				
				sleep(3);
				limpar();
			}
		} while(1); // O loop roda infinitamente ate alguem achar o botao ou a cobra (break)
	//VOLTAR PRO MENU OU JOGAR DNV
		printf("\nDeseja jogar novamente? (S/N): ");
		scanf(" %c", &jogarNovamente);
	}while(jogarNovamente == 's' || jogarNovamente == 'S');
}
