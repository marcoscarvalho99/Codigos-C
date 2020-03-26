#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main ()
{
	
	int array[TAM];
	int aux, contador;
	
	for(int i= 0 ; i < TAM; i++){
		
		scanf("%d",&array[i]);
	}
	printf("  numeros atuais de ordenacao digitada \n");
	for(int i= 0 ; i < TAM; i++){
		printf("   %d  \n",array[i]);
	}
	
	for(contador=1; contador < TAM; contador ++){
		
		for( int i= 0 ; i < TAM; i++){
			
			if (array[i] > array[i+1]){
				
				aux= array[i];
				array[i]=array[i+1];
				array[i+1]=aux;
			}
		
				
		}
		
	}
	printf(" \n ARRAY ORDENADO \n");
	for(int i= 0 ; i < TAM; i++){
		printf("  %4d  \n",array[i]);
	}
	
	return 0;
}

