#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 50
int main ()
{
int vet[T],maior;
srand(time(NULL));
for(int i=0; i < T; i++){
	vet[i]= rand()%100;
	if(i == 0){
	maior =vet[i];
	} 
	
	if(maior < vet[i]){
		maior=vet[i];
	} 
	
	
}
for(int i=0; i < T; i++){
	printf("  %d    ",vet[i]);
	}
printf("\n %d maior",maior);

return 0;
}

