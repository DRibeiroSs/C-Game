#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "jogos.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Limpar(){
	system("cls");
}
void PrimJogo(){

	char JogarD;
	do{
	char resposta;
	int pontuacao = 0;
	int valida;
	Limpar();
	
	do {
			Limpar();
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
			Limpar();
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
			Limpar();
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
			Limpar();
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
			Limpar();
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
		
	sleep(2);
	Limpar();
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
		printf("\nDeseja jogar novamente? (S/N): ");
		scanf(" %c", &JogarD);
	}while(JogarD == 's' || JogarD == 'S');
}



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
		
		if(((Nome1 >= 'A' && Nome1 <= 'G') || (Nome1 >= 'a' && Nome1 <= 'g')) && ((Nome2 >= 'A' && Nome2 <= 'G') || (Nome2 >= 'a' && Nome2 <= 'g'))){
			ValNomes = 0;
		} else {
    		printf("Opcao invalida... Digite apenas letras de A ate G.\n");
			ValNomes = 1;
			sleep(3);
			Limpar();
		}
		} while (ValNomes == 1);
		
		//esse rand eh pra "randomizar" um numero como ta dois, ele so pega 2 elementos como 0 e 1 oq soma 2
		Primeiro = rand() % 2;
		
		printf("\nDecidindo quem vai comecar...\n");
		sleep(2);
		Limpar();
		
		//ISSO EH PRA SABER QUAL O NOME QUE O USUARIO ESCOLHEU
		char Jog;
		
		if (Primeiro == 0){
			Jog = Nome1;
		} else {
			Jog = Nome2;
		}
		
		printf("\nO jogador(a) ");
		if(Jog == 'A' || Jog == 'a') printf("Giovanna");
		else if(Jog == 'B' || Jog == 'b') printf("Pedro Girotto");
		else if(Jog == 'C' || Jog == 'c') printf("Davi");
		else if(Jog == 'D' || Jog == 'd') printf("Victor Hugo");
		else if(Jog == 'E' || Jog == 'e') printf("Felipe");
		else if(Jog == 'F' || Jog == 'f') printf("Pedro Arthur");
		else if(Jog == 'G' || Jog == 'g') printf("Ricardo Casseb");
		printf(" comeca!!\n");
		
		
		//Esse +1 nao eh atoa, ele ta ai pra n deixar ficar com 0, consequentemente vai ficar de 1 a 5 a roleta
		botao = (rand() % 5) + 1;
		//Esse rand da variavel cobra eh pra q nunca fique a cobra e o botao no mesmo lugar
		do{
			cobra = (rand() % 5) + 1;	
		}while (cobra == botao);
		do{
		printf("\nAs 5 caixas estao na sua frente...\n");
		printf("     [1]  [2]  [3]  [4]  [5]\n");
		printf("Escolha uma das caixas, mas cuidado...\n\n");
		
		//ISSO AQUI EH PRA NGM QUEBRAR O CODIGO COLOCANDO UM CARACTER Q N ERA PRA SER COLOCADO.
		if (scanf("%i", &escolha) != 1 || escolha < 1 || escolha > 5){
			while(getchar() != '\n');
			printf("Opcao invalida! Por favor, escolha apenas numeros de 1 a 5.\n");
			sleep(2);
			Limpar();
			continue;
		}
		
		char Jog;
		if (Primeiro == 0){
			Jog = Nome1;
		} else {
			Jog = Nome2;
		}
		
		if(escolha == cobra){
				//ISSO AQUI EH PRA APARECER O NOME DO JOGADOR
				if(Jog == 'A' || Jog == 'a') printf("Giovanna achou a cascavel e perdeu!\n");
			    else if(Jog == 'B' || Jog == 'b') printf("Pedro Girotto achou a cascavel e perdeu!\n");
			    else if(Jog == 'C' || Jog == 'c') printf("Davi achou a cascavel e perdeu!\n");
			    else if(Jog == 'D' || Jog == 'd') printf("Victor Hugo achou a cascavel e perdeu!\n");
			    else if(Jog == 'E' || Jog == 'e') printf("Felipe achou a cascavel e perdeu!\n");
			    else if(Jog == 'F' || Jog == 'f') printf("Pedro Arthur achou a cascavel e perdeu!\n");
			    else if(Jog == 'G' || Jog == 'g') printf("Ricardo Casseb achou a cascavel e perdeu!\n");
				sleep(2);
				Limpar();
			continue;
		} else if(escolha == botao){
				//ISSO AQUI EH PRA APARECER O NOME DO JOGADOR
				if(Jog == 'A' || Jog == 'a') printf("Giovanna achou o botao e a saida! Uhull!\n");
			    else if(Jog == 'B' || Jog == 'b') printf("Pedro Girotto achou o botao e a saida! Uhull!\n");
			    else if(Jog == 'C' || Jog == 'c') printf("Davi achou o botao e a saida! Uhull!\n");
			    else if(Jog == 'D' || Jog == 'd') printf("Victor Hugo achou o botao e a saida! Uhull!\n");
			    else if(Jog == 'E' || Jog == 'e') printf("Felipe achou o botao e a saida! Uhull!\n");
			    else if(Jog == 'F' || Jog == 'f') printf("Pedro Arthur achou o botao e a saida! Uhull!\n");
			    else if(Jog == 'G' || Jog == 'g') printf("Ricardo Casseb achou o botao e a saida! Uhull!\n");
				sleep(2);
				Limpar();
			continue;
		} else {
			printf("A caixa esta vazia... que sorte!\n");
			sleep(2);
			Limpar();
		}
		}while(escolha != cobra && escolha != botao);
	
	//VOLTAR PRO MENU OU JOGAR DNV
		printf("\nDeseja jogar novamente? (S/N): ");
		scanf(" %c", &JogarD);
	}while(JogarD == 's' || JogarD == 'S');
	
}



void TercJogo() {
    int j1_g1 = 1, j1_g2 = 1, j2_g1 = 1, j2_g2 = 1;
    int turno = 1, opcao, origem, alvo;
    char jogarNovamente;

    do {
        j1_g1 = 1; j1_g2 = 1; j2_g1 = 1; j2_g2 = 1;
        turno = 1;

        while ((j1_g1 > 0 || j1_g2 > 0) && (j2_g1 > 0 || j2_g2 > 0)) {
            Limpar();
            printf("--- GOUSMAS WAR ---\n");
            printf("J1: [G1: %d] [G2: %d] | J2: [G1: %d] [G2: %d]\n", j1_g1, j1_g2, j2_g1, j2_g2);
            printf("VEZ DO JOGADOR %d\n\n", turno);
            printf("1 - Atacar\n2 - Dividir Gousma (Metade)\nEscolha: ");
            scanf("%d", &opcao);

            if (opcao == 1) {
                printf("Usar qual Gousma (1 ou 2)? ");
                scanf("%d", &origem);
                printf("Atacar qual inimiga (1 ou 2)? ");
                scanf("%d", &alvo);

                // Logica de Ataque
                if (turno == 1) {
                    int forca = (origem == 1) ? j1_g1 : j1_g2;
                    if (forca > 0) {
                        if (alvo == 1 && j2_g1 > 0) { j2_g1 += forca; turno = 2; }
                        else if (alvo == 2 && j2_g2 > 0) { j2_g2 += forca; turno = 2; }
                    }
                } else {
                    int forca = (origem == 1) ? j2_g1 : j2_g2;
                    if (forca > 0) {
                        if (alvo == 1 && j1_g1 > 0) { j1_g1 += forca; turno = 1; }
                        else if (alvo == 2 && j1_g2 > 0) { j1_g2 += forca; turno = 1; }
                    }
                }
            } 
            else if (opcao == 2) {
                int dividiu = 0;
                // Divisao automatica por 2
                if (turno == 1) {
                    if (j1_g1 > 1 && j1_g2 == 0) { j1_g2 = j1_g1 / 2; j1_g1 /= 2; dividiu = 1; }
                    else if (j1_g2 > 1 && j1_g1 == 0) { j1_g1 = j1_g2 / 2; j1_g2 /= 2; dividiu = 1; }
                } else {
                    if (j2_g1 > 1 && j2_g2 == 0) { j2_g2 = j2_g1 / 2; j2_g1 /= 2; dividiu = 1; }
                    else if (j2_g2 > 1 && j2_g1 == 0) { j2_g1 = j2_g2 / 2; j2_g2 /= 2; dividiu = 1; }
                }

                if (dividiu) {
                    printf("\nGousma dividida ao meio!\n");
                    turno = (turno == 1) ? 2 : 1; // Passa o turno
                } else {
                    printf("\nImpossivel dividir (Furia baixa ou ja possui duas)!\n");
                }
                sleep(2);
            }

            // Checagem de explosao
            if (j1_g1 > 5) j1_g1 = 0; if (j1_g2 > 5) j1_g2 = 0;
            if (j2_g1 > 5) j2_g1 = 0; if (j2_g2 > 5) j2_g2 = 0;
        }

        Limpar();
        printf("FIM DE JOGO! VENCEDOR: JOGADOR %d\n", (j1_g1 + j1_g2 > 0) ? 1 : 2);
        printf("Deseja jogar novamente? (S/N): ");
        scanf(" %c", &jogarNovamente);
    } while (jogarNovamente == 's' || jogarNovamente == 'S');
}

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	system("color 6F");
	
	do{
		Limpar();
		int menu;
		
		printf("==== Game Of The Year ====\n\n");
		printf("1: Perguntas e Respostas\n");
		printf("2: Cobra na Caixa\n");
		printf("3: Gousmas War\n");
		printf("4: Sair\n");
		
		if (scanf("%d", &menu) != 1) {
			while(getchar() != '\n');
			
			printf("Opcao Invalida!");
			sleep(1);
			continue;
		}
		
		if(menu == 1){
			PrimJogo();
		}
		else if(menu == 2){
			SegJogo();
		}
		else if(menu == 3){
			TercJogo();
		}
		else if(menu == 4){
			Limpar();
			printf("Ja vai? :(");
			break;
		} else{
			printf("Opcao Invalida!");
			sleep(1);
		}
		}while(1);
		
		return 0;
	}
