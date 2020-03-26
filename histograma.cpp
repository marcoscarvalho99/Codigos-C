#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int vet[10];
	int tam[10];

	for(int i=0;i < 10 ;i++){
	
		scanf("%d",&vet[i]);
		
	}
	for(int i=0;i < 10 ;i++){
	
		for(int j=0; j < vet[i];j++){
		
	
			printf("*");
		}printf("\n");
	}
	

return 0;
}

