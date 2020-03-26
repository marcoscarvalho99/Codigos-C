#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(NULL));
	int t=3,soma=0;
	int vetor[t][t];
	for(int i=0; i < t; i++){
		for(int j=0; j < t; j++){
		vetor[i][j]=rand()%10;
		}
	}
	for(int i=0, j=0; i < t; i++,j++){
		for(int j=0; j < t; j++){
		printf(" %d ",vetor[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0, j=0; i < t; i++,j++){
		printf("%d ",vetor[i][j]);
		soma+=vetor[i][j];
	}
printf("\n \n>>%d",soma);
return 0;
}

