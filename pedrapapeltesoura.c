#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int cpu, player, game = 0;
	srand(time(NULL));
	
	do{
		printf("Escolha sua jogada:\n1)Pedra\n2)Papel\n3)Tesoura\n4)Sair\n: ");
		scanf("%d",&player);
		cpu = rand() % 3 + 1;
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
				}
				break;
			case 4:
				game = -1;
				printf("Saindo...");
				break;
			default:
				printf("Jogada invalida\n\n");
				break;
		}
	}while(game != -1);
}

