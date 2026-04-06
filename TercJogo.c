void TercJogo() {
	// variáveis  para cada gousma
	int j1_g1, j1_g2, j2_g1, j2_g2;
	int turno, opcao, origem, alvo;
	char jogarD;			

	do {
		// todo mundo tem 1 de furia
		j1_g1 = 1;
		j1_g2 = 1;
		j2_g1 = 1;
		j2_g2 = 1;
		turno = 1;

		// isso e para o jogo continuar caso o jogador tenha alguma gosma com 1 de vida
		while ((j1_g1 > 0 || j1_g2 > 0) && (j2_g1 > 0 || j2_g2 > 0)) {
			Limpar();
			printf("===== GOUSMAS WAR =====\n");
			printf("Jogador 1: G1 = %d | G2 = %d\n", j1_g1, j1_g2);
			printf("Jogador 2: G1 = %d | G2 = %d\n", j2_g1, j2_g2);
			printf("------------------------\n");
			printf("Vez do Jogador %d\n", turno);
			printf("1 - Atacar\n2 - Dividir Gousma\n");
			printf("Escolha: ");
			scanf("%d", &opcao);

			if (opcao == 1) {
				printf("Qual gousma sua voce quer usar? (1 ou 2): ");
				scanf("%d", &origem);
				printf("Qual gousma inimiga quer atacar? (1 ou 2): ");
				scanf("%d", &alvo);

				// jogador 1 no ataque
				if (turno == 1) {
					if (origem == 1 && j1_g1 > 0) {
						if (alvo == 1 && j2_g1 > 0) { j2_g1 = j2_g1 + j1_g1; turno = 2; }
						else if (alvo == 2 && j2_g2 > 0) { j2_g2 = j2_g2 + j1_g1; turno = 2; }
						else { printf("Alvo invalido!\n"); sleep(1); }
					}
					else if (origem == 2 && j1_g2 > 0) {
						if (alvo == 1 && j2_g1 > 0) { j2_g1 = j2_g1 + j1_g2; turno = 2; }
						else if (alvo == 2 && j2_g2 > 0) { j2_g2 = j2_g2 + j1_g2; turno = 2; }
						else { printf("Alvo invalido!\n"); sleep(1); }
					}
					else { printf("Sua gousma esta morta!\n"); sleep(1); }
				}
				// jogador 2 no ataque
				else {
					if (origem == 1 && j2_g1 > 0) {
						if (alvo == 1 && j1_g1 > 0) { j1_g1 = j1_g1 + j2_g1; turno = 1; }
						else if (alvo == 2 && j1_g2 > 0) { j1_g2 = j1_g2 + j2_g1; turno = 1; }
						else { printf("Alvo invalido!\n"); sleep(1); }
					}
					else if (origem == 2 && j2_g2 > 0) {
						if (alvo == 1 && j1_g1 > 0) { j1_g1 = j1_g1 + j2_g2; turno = 1; }
						else if (alvo == 2 && j1_g2 > 0) { j1_g2 = j1_g2 + j2_g2; turno = 1; }
						else { printf("Alvo invalido!\n"); sleep(1); }
					}
					else { printf("Sua gousma esta morta!\n"); sleep(1); }
				}
			}
			else if (opcao == 2) {
				// aq e pra quando as gosmas forem se dividir
				if (turno == 1) {
					if (j1_g1 > 1 && j1_g2 == 0) {
						j1_g2 = j1_g1 / 2;
						j1_g1 = j1_g1 / 2;
						turno = 2;
					}
					else if (j1_g2 > 1 && j1_g1 == 0) {
						j1_g1 = j1_g2 / 2;
						j1_g2 = j1_g2 / 2;
						turno = 2;
					}
					else { printf("Nao pode dividir agora!\n"); sleep(1); }
				}
				else {
					if (j2_g1 > 1 && j2_g2 == 0) {
						j2_g2 = j2_g1 / 2;
						j2_g1 = j2_g1 / 2;
						turno = 1;
					}
					else if (j2_g2 > 1 && j2_g1 == 0) {
						j2_g1 = j2_g2 / 2;
						j2_g2 = j2_g2 / 2;
						turno = 1;
					}
					else { printf("Nao pode dividir agora!\n"); sleep(1); }
				}
			}

			// aq e pra garantir q elas morram quando tiver mais de 5
			if (j1_g1 > 5) { j1_g1 = 0; }
			if (j1_g2 > 5) { j1_g2 = 0; }
			if (j2_g1 > 5) { j2_g1 = 0; }
			if (j2_g2 > 5) { j2_g2 = 0; }
		}

		Limpar();
		printf("===== FIM DE JOGO =====\n");
		if (j1_g1 + j1_g2 > 0) {
			printf("Vitoria do Jogador 1!\n");
		} else {
			printf("Vitoria do Jogador 2!\n");
		}

		printf("\nQuer jogar de novo? (S/N): ");
		scanf(" %c", &jogarD);

	} while (jogarD == 's' || jogarD == 'S');
}
