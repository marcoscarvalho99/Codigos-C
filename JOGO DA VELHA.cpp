#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 3
#define cont 0
	void tabuleiro(){
		char tabu[TAM][TAM];
		
		
		for(int i=0; i<3 ; i++){
			for(int j=0; j<3 ; j++){
				tabu[i][j]='0';
			}
	
		}
	
	
	
		for(int i=0; i<3 ; i++){
			for(int j=0; j<3 ; j++){
			
				printf("%c |",tabu[i][j]);
		
			}
			printf("\n");
		
		}
	
	system("PAUSE");
	
		
}
void jogadas(){
		char tabu[TAM][TAM];
	while(cont!=1){
		
		for(int i=0; i<3 ; i++){
			for(int j=0; j<3 ; j++){
			
				scanf("%c",&tabu[i][j]);
			}
		}
		
		if(tabu[0][0]='x' && tabu[0][1]='x' && tabu[0][2]='x'){
			printf("x ganhou");
		}
		if(tabu[0][0]='x' && tabu[1][1]='x' && tabu[1][1]='x'){
			printf("x ganhou");
		}	
	}

}
int main ()
{
	int opcao,opcaojogador,menu;
	char jogadorum[40],jogadordois[40];
	char tabu[TAM][TAM];
	
	
	setlocale(LC_ALL,"portuguese");
	
	//laço principal que controla o menu do jogo.
	
	do{
		system("CLS");
		printf("-------------JOGO DA VELHA-------------");
		printf("\n\n       ----------MENU-----------");
	
		
		printf("\n\n 1-JOGAR \n 2-INSTRUÇÕES \n 3-SAIR");
		
		
		printf("\n\ndigite o digito de opção: ");
		scanf("%d",&opcao);
		//menu controlado pelo switch.
		switch(opcao){
		//case 1 começo e iniciação o jogo.
case 1: printf("ainda em fase de andamento...");
 			
			 system("CLS");
			 
 			//primeiro jogador vai digitar seu nome
 			
            printf("\nDigite o nome do jogador (X): ");
            setbuf(stdin,NULL);
			gets(jogadorum);
            
 			//segundo jogador vai digitar seu nome
 			
            printf("\nDigite o nome do jogador (O): ");
            setbuf(stdin,NULL);
			gets(jogadordois);
			
            
            
			do
                {
                    system("CLS");
                    printf("--- Defina quem irá jogar primeiro ---\n\n");
                    
                    printf("[1] JOGADOR X\n");
                    printf("[2] JOGADOR O\n\n");
                    printf("DIGITE UMA OPÇÃO: ");
                    scanf("%d", &opcaojogador);
                }
                //se caso o usuario digitar um numeoro que não é nem um e nem dois o laço vai continuar pedindo as opçoes destes jogadores.
                while(opcaojogador != 1 && opcaojogador != 2);
                tabuleiro();
                jogadas();
	break;
	case 2: 
			//while (menu==110){
		
	
			printf("\nREGRAS DO JOGO\n\n");
			printf("1 -O tabuleiro  é uma matriz  de três linhas por três colunas.\n");
			printf("2- Dois jogadores escolhem uma marcação cada um, geralmente um círculo (O) e um xis (X).\n");	
			printf("3- Os jogadores jogam alternadamente, uma marcação por vez, numa lacuna que esteja vazia.\n");
			printf("4- O objectivo é conseguir três círculos ou três xis em linha, quer horizontal, vertical ou diagonal.\n");
			printf("5- Se os dois jogadores jogarem sempre da melhor forma, o jogo terminará sempre em empate.\n");
			printf("6- Em nenhum momento voçe pode jogar repetidamente na mesma casa do jogo\n");
			printf("\n\n    INSTRUÇÕES PARA O JOGADOR.\n\n\n");
			printf("Ganhar: Se você tem duas peças numa linha, ponha a terceira.\n");
			printf("Bloquear: Se o oponente tiver duas peças em linha, ponha a terceira para bloqueá-lo.\n");
			printf("Triângulo: Crie uma oportunidade em que você poderá ganhar de duas maneiras.\n");
			printf("Bloquear o Triângulo do oponente.\n");
			printf("Centro: Jogue no centro\n");
			printf("\n\n \t \t  aproveite e divirta-se ^_^");
			printf("\n\n\n\n\n\ndigite 0 numero'0' para voltar ao menu inicial: ");
			scanf("%d",&menu);
			
				
			break;
		
	case 3: printf("\n\n\nvocê saiu do jogo...");
}
		
		
	} while(opcao!=3 );

return 0;
}

