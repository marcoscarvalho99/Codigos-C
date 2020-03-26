#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int tam=5,aux1,aux;
	int mat[tam][tam];
	
	for(int i=0; i < tam; i++){
		printf("\n digite o valor da linha: %d \n",i);
		for(int j=0; j < tam; j++){
			scanf("%d",&mat[i][j]);
			if(i == 2){
				aux=mat[i][j];
				mat[i][j]=mat[i-2][j];
				mat[i-2][j]=aux;
			}
			if(j==4){
				aux1=mat[i][j];
				mat[i][j]=mat[i][j-2];
				mat[i][j-2]= aux1;
				
			}
		}
	}
	printf("\nMATRIZ\n");
	for(int i=0; i < tam; i++){
		for(int j=0; j < tam; j++){
		printf(" %d |",mat[i][j]);	
		}
	printf("\n");
	}
	system("pause");
return 0;
}

