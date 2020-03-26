#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int opcao;
	printf("digite a opção");
	scanf("%d",&opcao);

char tabuleiro[3][3];
int i,j;
while(opcao!=3){



    system("CLS");
    printf("\n\n   --- TABULEIRO ---- \n\n");
    printf("    0     1     2  \n  ");
    printf("0  %c  |  %c  |  %c  \n  ", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  ________________\n  ");
    printf("1  %c  |  %c  |  %c  \n  ", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  ________________\n  ");
    printf("2  %c  |  %c  |  %c  \n\n  ", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

printf("\nlinha");
scanf("%d",&i);
printf("\ncoluna");
scanf("%d",&j);
tabuleiro[j][i]='x';
}
//switch(opcao){
//
//case 1: printf("ainda em fase de andamento...");
//	break;
//	case 2: printf("\nREGRAS DO JOGO\n\n");
//			printf("1 -O tabuleiro  é uma matriz  de três linhas por três colunas.\n");
//			printf("2- Dois jogadores escolhem uma marcação cada um, geralmente um círculo (O) e um xis (X).\n");	
//			printf("3- Os jogadores jogam alternadamente, uma marcação por vez, numa lacuna que esteja vazia.\n");
//			printf("4- O objectivo é conseguir três círculos ou três xis em linha, quer horizontal, vertical ou diagonal.\n");
//			printf("5- Se os dois jogadores jogarem sempre da melhor forma, o jogo terminará sempre em empate.\n");
//			printf("6- Em nenhum momento voçe pode jogar repetidamente na mesma casa do jogo\n");
//			printf("\n\n instruções para o jogador\n.");
//			printf("Ganhar: Se você tem duas peças numa linha, ponha a terceira.\n");
//			printf("Bloquear: Se o oponente tiver duas peças em linha, ponha a terceira para bloqueá-lo.\n");
//			printf("Triângulo: Crie uma oportunidade em que você poderá ganhar de duas maneiras.\n");
//			printf("Bloquear o Triângulo do oponente.\n");
//			printf("Centro: Jogue no centro\n");
//			printf("\n\n\                                                          aproveite e divirta-se ^_^");
//			break;
//	case 3: printf("\n\n\nvocê saiu do jogo...");
//}
//
// 


	
return 0;}

//questao 5 da lista 7
////int main ()
////{
////	char nomes[5][10],aux[10];
////	
////	for(int i=0; i < 5; i++){
////		fgets(nomes[i],10,stdin);
////		setbuf(stdin,NULL);
////		
////	}
////	int cont;
////	do {
////		cont=0;
////	
////	for(int i=0; i < 4; i++){
////	
////		if(strcasecmp(nomes[i],nomes[i+1])>0){
////		strcpy(aux,nomes[i]);
////		strcpy(nomes[i],nomes[i+1]);
////		strcpy(nomes[i+1],aux);
////		cont=1;
//////			aux[i]= nomes[i];
//////			nomes[i]=nomes[i+1];
//////			nomes[i+1]=aux[i];
////		
////	//printf("%d \n",strlen(nomes[i]));
////		}
////	} 
////	}while ( cont ==1);
////	for(int i=0; i < 5; i++){
////	printf("\n %s",nomes[i]);
////	}
	
	
	
//questao 3 da lista 7
//char vet[10], veto[10];
//
//
//for(int i=0; i < 10 ; i++){
//	scanf("%s",&vet[i]);
//}
//for(int i=0,j=9; i < 10 ; i++,j--){
//veto[i]=vet[j];
//
//}
//strcpy(vet,veto);
//for(int i=0; i < 10 ; i++){
//printf("%c",vet[i]);
//}..
//
//int vet[3][3], menor[3]={},k[3]={};
//
//for(int i=0; i < 3;i++){
//	
//	for(int j=0; j<3;j++){
//		scanf("%d",&vet[i][j]);
//		if ( j==0){
//		menor[i]=vet[i][j];
//		k[i]=j;
//		}
//		if (menor[i]>vet[i][j]){
//			menor[i]=j;
//			k[i]=j;
//		}
//	}
//}
//for(int i=0; i < 3;i++){
//	printf("aluno %d: ",i+1);
//	for(int j=0; j<3;j++){
//	
//	printf("%d ",vet[i][j]);
//	}
//	printf("\n");
//	
//}
//for(int i=0;i<3;i++){
//	printf("a menor nota de aluno %d foi na prova: %d \n",i+1,k[i]+1);
//}
//questao 4 lista 7
//char texto[50],carac;
//
//fgets(texto,50,stdin);
//strupr(texto);
//setbuf(stdin,NULL);
//scanf("%c",&carac);
//
//for (int i= 0; i < strlen(texto);i++)
//{ 	
//	if (texto[i] == 'A' || texto [i]== 'E' || texto [i]== 'I' || texto [i]== 'O' || texto [i]== 'U')
//	{ texto[i]= carac;
//	}
//}
//printf("%s",texto);
//return 0;
//}

