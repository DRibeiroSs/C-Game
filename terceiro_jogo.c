#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>
#include "terceiro_jogo.h"

void terceiroJogo() {
    int j1G1 = 1, j1G2 = 1, j2G1 = 1, j2G2 = 1;
    int turno = 1, opcao, origem, alvo;
    char jogarNovamente;

    while ((j1G1 > 0 || j1G2 > 0) && (j2G1 > 0 || j2G2 > 0)) {
        limpar();
    	printf("--- GOUSMAS WAR ---\n");
   	 	printf("Jogador 1: [Gousma 1: %d] [Gousma 2: %d] | Jogador 2: [Gousma 1: %d] [Gousma 2: %d]\n\n", j1G1, j1G2, j2G1, j2G2);
        printf("VEZ DO JOGADOR %d\n\n", turno);
        printf("1 - Atacar\n2 - Dividir Gousma (Metade)\nEscolha: ");
        scanfInt(&opcao);
		
        if (opcao == 1) {
            printf("Usar qual Gousma (1 ou 2)? ");
            scanfInt(&origem);
            if (origem > 2 || origem < 1) {
            	printf("opcao invalida\n");
            	sleep(2);
				continue;
			}
            printf("Atacar qual inimiga (1 ou 2)? ");
            scanfInt(&alvo);
			if (alvo > 2 || alvo < 1) {
            	printf("opcao invalida\n");
            	sleep(2);
				continue;
			}
            // Logica de Ataque
            if (turno == 1) {
				int forca = (origem == 1) ? j1G1 : j1G2;
                
                if (forca > 0) {
                    if (alvo == 1 && j2G1 > 0) { j2G1 += forca; turno = 2; }
                    else if (alvo == 2 && j2G2 > 0) { j2G2 += forca; turno = 2; }
                }
            } else {
                int forca = (origem == 1) ? j2G1 : j2G2;
                if (forca > 0) {
                    if (alvo == 1 && j1G1 > 0) { j1G1 += forca; turno = 1; }
                    else if (alvo == 2 && j1G2 > 0) { j1G2 += forca; turno = 1; }
                }
            }
        } else if (opcao == 2) {
            int dividiu = 0;
            // Divisao automatica por 2
            if (turno == 1) {
                if (j1G1 > 1 && j1G2 == 0) {
                	int div = j1G1 / 2;
					j1G2 = div; 
					j1G1 = div; 
					dividiu = 1; 
				} else if (j1G2 > 1 && j1G1 == 0) { 
					int div = j1G2 / 2;
					j1G1 = div; 
					j1G2 = div; 
					dividiu = 1; 
				}
            } else {
                if (j2G1 > 1 && j2G2 == 0) { 
                	int div = j2G1 / 2;
					j2G2 = div; 
					j2G1 = div; 
					dividiu = 1; 
				} else if (j2G2 > 1 && j2G1 == 0) { 
					int div = j2G2 / 2;
					j2G1 = div; 
					j2G2 = div; 
					dividiu = 1; 
				}
            }

            if (dividiu) {
                printf("\nGousma dividida ao meio!\n");
                turno = (turno == 1) ? 2 : 1; // Passa o turno
            } else {
                printf("\nImpossivel dividir (Furia baixa ou ja possui duas)!\n");
            }
            sleep(2);
        } else {
        	printf("opcao invalida\n");
            sleep(2);
			continue;
		}

		// Verifica se alguma passou de 5 e explodiu
        if (j1G1 > 5) j1G1 = 0;
		if (j1G2 > 5) j1G2 = 0;
        if (j2G1 > 5) j2G1 = 0;
		if (j2G2 > 5) j2G2 = 0;
    }

    limpar();
    printf("FIM DE JOGO! VENCEDOR: JOGADOR %d\n", (j1G1 + j1G2 > 0) ? 1 : 2);
    printf("Deseja jogar novamente? (S/N): ");
    scanf(" %c", &jogarNovamente);
    if (jogarNovamente == 's' || jogarNovamente == 'S') {
    	terceiroJogo();
	} else {
		menuPrincipal();
	}
}

	


