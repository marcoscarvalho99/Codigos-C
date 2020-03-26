#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int s,s1;
	char nome[55];
	printf("********************************\n");
	printf(" ---------BARBEARIA----------\n");
	printf("\n");
	printf("********************************\n\n");
	printf("Digite seu nome para garantir a seguranca: ");
	gets (nome);
	printf("\n");
	printf("deseja usar algum de nossos servicos? %s ",nome);
	printf("\n \n digite '1' se sim e 0 se nao: ");
	scanf("%d",&s);
	
	
	
	switch (s){
		
		
		case 1: printf("********************************\n \n QUAL SERVICO? \n");
		printf("1-cortar o cabelo\n2-fazer a barba \n3-comprar produtos \n4-voltar");
		scanf("%d",&s);
		
		switch (s){
			
			case 1: printf("\n qual o corte ou estyllo que desejar realizar: \n 1 social \n 2 militar \n 3 degrader \ combo barba e cabelo \n >>");
		}
		
		case 0: printf("\n \n********************************\n \n");
		printf("OBRIGADO POR ACESSAR NOSSOS SERVICOS! =) \n \n");
	}
	
	printf(">> seu dados %s foram salvos com sucesso! <<",nome);
	
	
	return 0;
}
