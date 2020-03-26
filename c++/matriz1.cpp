#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int n=3, vet[n][n], cont=0,soma[n]={};

	for(int i=0; i < n; i++){
		
		cont=0;
		
		printf("\n digite os 3 num da linha %d\n",i);
		for(int j=0; j < n; j++){
			
		scanf("%d",&vet[i][j]);	
			if(cont <= 2){
				soma[i]=soma[i]+vet[i][j];
				cont++;
			}
		}
		
	}
	
	for(int i=0; i < n; i++){
		printf("soma =%d   >%d\n",soma[i],i);
	}
	
		printf("\n MATRIZ ORIGINAL \n");
		for(int i=0; i < n; i++){
			for(int j=0; j < n; j++){
			printf("| %d |", vet[i][j]);
		
		}
		printf("\n");
	}printf("%d<",vet[2][0]);
return 0;
}

