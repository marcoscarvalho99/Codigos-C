#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define t 3
int main ()
{ 
int vetor[t][t],soma[t]={};
srand(time(NULL));
for(int i=0; i < t; i++){
	for(int j=0; j < t; j++){
	 vetor[i][j]=rand()%20;
	}
}

for(int i=0; i < t; i++){
	for(int j=0; j < t; j++){	
	printf(" %d ",vetor[i][j]);
	}	
	printf("\n");
}
for(int j=0; j < t; j++){
for(int i=0,j=0; i < t; i++){
	
	soma[j]+=vetor[i][j];
}
}
for(int j=0; j < t; j++){
printf("\n\n>> %d ",soma[j]);

}return 0;
}
