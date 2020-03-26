#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int v=10;
	int vet[v]= {10,9,7,8,5,6,4,3,2,1};
	int menor, aux;

	for (int i=0; i < v; i++){
		menor=vet[i];
		for(int j=i+1; j < v;j++){
		
			if (vet[menor] > vet[j]){
				menor=j;
			}
			if (i != menor){
				aux= menor;
				vet[i] = vet[menor];
				vet[menor]= aux;
			}
		
		}
	
	
	
	}
for ( int j=0; j < v; j++)
	printf("%d ",vet[j]);
	return 0;	
}
