#include <stdio.h>
#include <stdlib.h>


int main ()
{
	
	int l=2,c=5,aux;
	int matriz[l][c];
	
	for(int i=0; i < l;i++){
		
		
		for(int j=0; j < c;j++){
			scanf("%d",&matriz[i][j]);
		
		if (matriz[i][j]%2==0){
			aux=matriz[0][j] ;
			matriz[0][j]=matriz[i][j];
			matriz[i][j]= aux;
		}
	//	if (matriz[i][j]%2 != 0){
	//		aux= matriz[i][j];
	//		matriz[1][j]=aux;
	//}
	
		}
		
	}
	printf("\n      MATRIZ\n\n");
	for(int i=0; i < l;i++){
		
		
		for(int j=0; j < c;j++){
			printf(" %d  ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
return 0;
}


