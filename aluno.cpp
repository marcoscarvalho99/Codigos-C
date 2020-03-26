#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main{
	
	int tam;
	printf("tam:");
	scanf("%d",&tam);
	int vet[tam][3],menor[tam],nota[tam]={};
	
	for(int i=0 ;i < tam ; i++){
		printf("notas do aluno %d. \n",i+1);
		for(int j=0 ;j < 3 ; j++){
			scanf("%d",&vet[i][j]);
			menor[i]=10;
		}
	}
	for(int i=0 ;i < tam ; i++){
		printf("notas do aluno %d. \n",i+1);
		for(int j=0 ;j < 3 ; j++){
			printf("%d ",vet[i][j]);
			
			if(menor[i]>vet[i][j]){
			menor[i]=vet[i][j];
			nota[i]=j;
			}
		} printf("\n");
	}
	printf("\n\n\n");
	for(int i=0 ;i < tam ; i++){
		printf("nota mais baixa %d do aluno %d\n",nota[i]+1,i+1);
		for(int j=0 ;j < 3 ; j++){
	
		}
	}
return 0;
}

