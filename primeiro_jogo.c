#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>
#include "primeiro_jogo.h"

void primeiroJogo() {

	char jogarNovamente;
	do{
		char resposta;
		int pontuacao = 0;
		int valida;
		limpar();
	
		do {
			limpar();
			printf("Jogo de Perguntas e Respostas, se prepare pois eh dificil!\n\n");
			printf("----- Pergunta 1 -----\n");
			printf("Quanto sao 5 + 5?\n");
			printf("A) 5\n");
			printf("B) 7\n");
			printf("C) 10\n");
			printf("D) 2\n");
			printf("Sua resposta: ");
			scanf(" %c", &resposta);
			
			if(resposta == 'c' || resposta == 'C'){
				pontuacao++;
				printf("Parabens! olha seus pontos: %i\n", pontuacao);
				valida = 1;
			}else if(resposta == 'a' || resposta == 'A' || resposta == 'b' || resposta == 'B' || resposta == 'd' || resposta == 'D'){
				printf("\nResposta Errada! A alternativa correta era a C.\n");
				valida = 1;
			}else{
				printf("\nOpcao Invalida! Por favor, digite A, B, C ou D.\n");
				sleep(2);
				valida = 0;
			}
		} while (valida == 0);
		sleep(2);
	
		do {
			limpar();
			printf("----- Pergunta 2 -----\n");
			printf("Quem eh Ganondorf?\n");
			printf("A) Lorde das Trevas\n");
			printf("B) Melhor amigo do Link\n");
			printf("C) Ninguem\n");
			printf("D) Pedro girotto?\n");
			printf("Sua resposta: ");
			scanf(" %c", &resposta);
			
			if(resposta == 'A'|| resposta == 'a'){
				pontuacao++;
				printf("Parabens! olha seus pontos: %i\n", pontuacao);
				valida = 1;
			}else if(resposta == 'b' || resposta == 'B' || resposta == 'c' || resposta == 'C' || resposta == 'd' || resposta == 'D'){
				printf("\nResposta Errada! A alternativa correta era a A.\n");
				valida = 1;
			}else{
				printf("\nOpcao Invalida! Por favor, digite A, B, C ou D.\n");
				sleep(2);
				valida = 0;
			}
		} while (valida == 0);
		sleep(2);
	
		do {
			limpar();
			printf("----- Pergunta 3 -----\n");
			printf("Qual o plural de vilao\n");
			printf("A) Villand Saga\n");
			printf("B) Vilaos\n");
			printf("C) Viloes\n");
			printf("D) Nenhuma das Respostas acima\n");
			printf("Sua resposta: ");
			scanf(" %c", &resposta);
			
			if(resposta == 'b'|| resposta == 'B' || resposta == 'C'|| resposta == 'c'){
				pontuacao++;
				printf("Parabens! olha seus pontos: %i\n", pontuacao);
				valida = 1;
			}else if(resposta == 'a' || resposta == 'A' || resposta == 'd' || resposta == 'D'){
				printf("\nResposta Errada! A alternativa correta era a B e C.\n");
				valida = 1;
			}else{
				printf("\nOpcao Invalida! Por favor, digite A, B, C ou D.\n");
				sleep(2);
				valida = 0;
			}
		} while (valida == 0);
		sleep(2);
		
		do {
			limpar();
			printf("----- Pergunta 4 -----\n");
			printf("No jogo Valorant, qual o nome da moeda principal usada para comprar skins\n");
			printf("A) V-Bucks?\n");
			printf("B) BitCoin\n");
			printf("C) Radianite Points\n");
			printf("D) Valorant Points\n");
			printf("Sua resposta: ");
			scanf(" %c", &resposta);
			
			if(resposta == 'd' || resposta == 'D'){
				pontuacao++;
				printf("Parabens! olha seus pontos: %i\n", pontuacao);
				valida = 1;
			}else if(resposta == 'a' || resposta == 'A' || resposta == 'b' || resposta == 'B' || resposta == 'c' || resposta == 'C'){
				printf("\nResposta Errada! A alternativa correta era a D.\n");
				valida = 1;
			}else{
				printf("\nOpcao Invalida! Por favor, digite A, B, C ou D.\n");
				sleep(2);
				valida = 0;
			}
		} while (valida == 0);
		sleep(2);
		
		do {
			limpar();
			printf("----- Pergunta 5 -----\n");
			printf("Na linguagem C, qual simbolo usamos para comparar se dois valores sao iguais?\n");
			printf("A) =\n");
			printf("B) ==\n");
			printf("C) ++\n");
			printf("D) !=\n");
			printf("Sua resposta: ");
			scanf(" %c", &resposta);
			
			if(resposta == 'B' || resposta == 'b'){
				pontuacao++;
				printf("Parabens! olha seus pontos: %i\n", pontuacao);
				valida = 1;
			}else if(resposta == 'a' || resposta == 'A' || resposta == 'c' || resposta == 'C' || resposta == 'd' || resposta == 'D'){
				printf("\nResposta Errada! A alternativa correta era a B.\n");
				valida = 1;
			}else{
				printf("\nOpcao Invalida! Por favor, digite A, B, C ou D.\n");
				sleep(2);
				valida = 0;
			}
		} while (valida == 0);
		sleep(2);
		
		limpar();
		printf("----- FIM DE JOGO -----\n\n");
		printf("Sua pontuacao final foi: %i de 5\n\n", pontuacao);
		
		if(pontuacao == 5){
			printf("Duas palavras pra voce, PARA BENS, voce gabaritou!");
		}
		else if(pontuacao >= 3){
			printf("Valeu o esforco, um pouco acima da media mas tenta gabaritar na proxima!");
		}
		else{
			printf("Tenta dar uma revisada ai, mais sorte da proxima...");
		}
		
		printf("\nDigite [S] para jogar novamente e [N] para sair: ");
		scanf(" %c", &jogarNovamente);
	}while(jogarNovamente == 's' || jogarNovamente == 'S');
	primeiroJogo();
}
