#include <stdio.h>
#include <stdlib.h>


int main ()
{

	int tam;
	printf("tamanho: ");
	scanf("%d",&tam);
	int vet[tam];

	for(int i=0; i < tam;i++){
		scanf("%d",&vet[i]);
		
	}
	for(int i=0; i < tam;i++){
	if(vet[i]%7==0){
			printf("%d e divisivel\n ",vet[i]);
		}
		else 
			printf(" %d nao e divisivel \n",vet[i]);
	}
	return 0;
}







//questao 9

//questao 8 da lista
//	int vet[10],soma=0,cont=0;
//	
//	for(int i=0;i<10;i++){
//		scanf("%d",&vet[i]);
//		if(vet[i]>=0){
//		soma+=vet[i];
//		}
//		else 
//			cont++;
//	}
//	for(int i=0;i<10;i++){
//		printf("%d  ",vet[i]);
//	}
//	
//	printf("soma dos positivos=%d \n quantidade de negativos %d",soma,cont);
//	
//	
//	
//	
//	return 0;
//}




//{menor e maior elemento de um vetor.
//int vet[10],maior,menor;
//
//
//for(int i=0;i<10;i++){
//	scanf("%d",&vet[i]);
//	maior=vet[0];
//}
//for(int i=1;i<10;i++){
//	if(maior<vet[i]){
//	maior=vet[i];
//	}
//	if(maior>vet[i]){
//	menor=vet[i];
//	}
//}
//printf("\n\n %d maior %d menor",maior,menor);
//return 0;
//}

