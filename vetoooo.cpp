#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int tam;
	scanf("%d",&tam);
	int vet[tam];

	for(int i=0; i < tam; i++){
		scanf("%d",&vet[i]);
	}
	printf("\n \n");
	printf("       vetor não ordenado\n");
	for(int i=0; i < tam; i++){
	printf("%d \t",vet[i]);
	}
	int contador;
	int aux;
	for(contador=0; contador < tam; contador++){
		
		for(int i=0;i < tam-1 ;i++){
			if(vet[i] < vet[i+1]){
				
			aux=vet[i];
			vet[i]=vet[i+1];
			vet[i+1]=aux;
			}
		}
	}
	printf("\n \n");
		printf("       vetor ordenado\n");
	for(int i=0;i < tam ;i++){
		printf("%d \t",vet[i]);
		
	}
		
return 0;
}

