#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int cpu, player, game = 0;
	srand(time(NULL));
	
	do{
		printf("Escolha sua jogada:\n1)Pedra\n2)Papel\n3)Tesoura\n4)Lagarto\n5)Spock\n6)Sair\n: ");
		scanf("%d",&player);
		cpu = rand() % 5 + 1;
		switch(player){
			case 1:
				switch(cpu){
					case 1:
						printf("Jogador: pedra\nCPU: pedra\nEmpate\n\n");
						break;
					case 2:
						printf("Jogador: pedra\nCPU: papel\nDerrota\n\n");
						break;
					case 3:
						printf("Jogador: pedra\nCPU: tesoura\nVitoria\n\n");
						break;
					case 4:
						printf("Jogador: pedra\nCPU: lagarto\nVitoria\n\n");
						break;
					case 5:
						printf("Jogador: pedra\nCPU: Spock\nDerrota\n\n");
						break;
				}
				break;
			case 2:
				switch(cpu){
					case 1:
						printf("Jogador: papel\nCPU: pedra\nVitoria\n\n");
						break;
					case 2:
						printf("Jogador: papel\nCPU: papel\nEmpate\n\n");
						break;
					case 3:
						printf("Jogador: papel\nCPU: tesoura\nDerrota\n\n");
						break;
					case 4:
						printf("Jogador: papel\nCPU: lagarto\nDerrota\n\n");
						break;
					case 5:
						printf("Jogador: papel\nCPU: Spock\nVitoria\n\n");
						break;
				}
				break;
			case 3:
				switch(cpu){
					case 1:
						printf("Jogador: tesoura\nCPU: pedra\nDerrota\n\n");
						break;
					case 2:
						printf("Jogador: tesoura\nCPU: papel\nVitoria\n\n");
						break;
					case 3:
						printf("Jogador: tesoura\nCPU: tesoura\nEmpate\n\n");
						break;
					case 4:
						printf("Jogador: tesoura\nCPU: lagarto\nVitoria\n\n");
						break;
					case 5:
						printf("Jogador: tesoura\nCPU: Spock\nDerrota\n\n");
						break;
				}
				break;
			case 4:
				switch(cpu){
					case 1:
						printf("Jogador: lagarto\nCPU: pedra\nDerrota\n\n");
						break;
					case 2:
						printf("Jogador: lagarto\nCPU: papel\nVitoria\n\n");
						break;
					case 3:
						printf("Jogador: lagarto\nCPU: tesoura\nDerrota\n\n");
						break;
					case 4:
						printf("Jogador: lagarto\nCPU: lagarto\nEmpate\n\n");
						break;
					case 5:
						printf("Jogador: lagarto\nCPU: Spock\nVitoria\n\n");
						break;
				}
				break;
			case 5:
				switch(cpu){
					case 1:
						printf("Jogador: Spock\nCPU: pedra\nVitoria\n\n");
						break;
					case 2:
						printf("Jogador: Spock\nCPU: papel\nDerrota\n\n");
						break;
					case 3:
						printf("Jogador: Spock\nCPU: tesoura\nVitoria\n\n");
						break;
					case 4:
						printf("Jogador: Spock\nCPU: lagarto\nDerrota\n\n");
						break;
					case 5:
						printf("Jogador: Spock\nCPU: Spock\nEmpate\n\n");
						break;
				}
				break;
			case 6:
				game = -1;
				printf("Saindo...");
				break;
			default:
				printf("Jogada invalida\n\n");
				break;
		}
	}while(game != -1);
}
