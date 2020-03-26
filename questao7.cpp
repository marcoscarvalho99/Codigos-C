#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char gab[10][1];
	int alunos;
	printf("      GABARITO\n\n");
	//do{
	
		for(int i=0;i <10; i++)
		{
		printf("%d questao: ",i+1);
		gets(gab[i]);
		setbuf(stdin,NULL);
		}
	//} //while (gab[i]!='A'&& gab[i]!='B' &&gab[i]!='C'&&gab[i]!='D');
	char resposta[10][1];
	
	printf("\n  DIGITE A QUANTIDADE DE ALUNOS: ");
	scanf("%d",&alunos);
	setbuf(stdin,NULL);
	char nome[alunos][30];
	int cont[alunos]={};
	printf("\n  DIGITE O NOME DOS ALUNOS: ");
	for(int i=0;i < alunos; i++)
	{ printf("%d- ",i+1);
	fgets(nome[i],30,stdin);
	setbuf(stdin,NULL);
	printf("\n digite as respostas de %s",nome[i]);
		for(int j=0;j < 10;j++){
			printf("questao %d: ",j+1);
			gets(resposta[j]);
			setbuf(stdin,NULL);
		//if(strcasecmp(gab[j],resposta[j])<0){
		//	cont[i]++;
		//if (strcmp(gab[j],resposta[j])==0){
		 
		//	cont[i]++;
			if (strcmp(gab[j],resposta[j])==0){
		 
					cont[i]++;
			}
			
		}
	} 
	
	
	printf("\n\n %d",cont[0]);
return 0;
}

