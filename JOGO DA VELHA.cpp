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
	
	//la�o principal que controla o menu do jogo.
	
	do{
		system("CLS");
		printf("-------------JOGO DA VELHA-------------");
		printf("\n\n       ----------MENU-----------");
	
		
		printf("\n\n 1-JOGAR \n 2-INSTRU��ES \n 3-SAIR");
		
		
		printf("\n\ndigite o digito de op��o: ");
		scanf("%d",&opcao);
		//menu controlado pelo switch.
		switch(opcao){
		//case 1 come�o e inicia��o o jogo.
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
                    printf("--- Defina quem ir� jogar primeiro ---\n\n");
                    
                    printf("[1] JOGADOR X\n");
                    printf("[2] JOGADOR O\n\n");
                    printf("DIGITE UMA OP��O: ");
                    scanf("%d", &opcaojogador);
                }
                //se caso o usuario digitar um numeoro que n�o � nem um e nem dois o la�o vai continuar pedindo as op�oes destes jogadores.
                while(opcaojogador != 1 && opcaojogador != 2);
                tabuleiro();
                jogadas();
	break;
	case 2: 
			//while (menu==110){
		
	
			printf("\nREGRAS DO JOGO\n\n");
			printf("1 -O tabuleiro  � uma matriz  de tr�s linhas por tr�s colunas.\n");
			printf("2- Dois jogadores escolhem uma marca��o cada um, geralmente um c�rculo (O) e um xis (X).\n");	
			printf("3- Os jogadores jogam alternadamente, uma marca��o por vez, numa lacuna que esteja vazia.\n");
			printf("4- O objectivo � conseguir tr�s c�rculos ou tr�s xis em linha, quer horizontal, vertical ou diagonal.\n");
			printf("5- Se os dois jogadores jogarem sempre da melhor forma, o jogo terminar� sempre em empate.\n");
			printf("6- Em nenhum momento vo�e pode jogar repetidamente na mesma casa do jogo\n");
			printf("\n\n    INSTRU��ES PARA O JOGADOR.\n\n\n");
			printf("Ganhar: Se voc� tem duas pe�as numa linha, ponha a terceira.\n");
			printf("Bloquear: Se o oponente tiver duas pe�as em linha, ponha a terceira para bloque�-lo.\n");
			printf("Tri�ngulo: Crie uma oportunidade em que voc� poder� ganhar de duas maneiras.\n");
			printf("Bloquear o Tri�ngulo do oponente.\n");
			printf("Centro: Jogue no centro\n");
			printf("\n\n \t \t  aproveite e divirta-se ^_^");
			printf("\n\n\n\n\n\ndigite 0 numero'0' para voltar ao menu inicial: ");
			scanf("%d",&menu);
			
				
			break;
		
	case 3: printf("\n\n\nvoc� saiu do jogo...");
}
		
		
	} while(opcao!=3 );

return 0;
}

