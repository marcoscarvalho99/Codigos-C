#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int j=0;
int maior;
int vetor[10];


//int mai(int n);


int main()
{
		int conj [10]={1,2,3,4,5,6};
		int conjb [10]={4,5,6,7,8,9};
		int inter[10]={};
		int cont=0;
		
		for(int i =0; i < 10 ; i++){
			for(int j =0; j < 10 ; j++){
				if(conj[i]!=conjb[j]){
					inter[cont++]=conj[i];
					 break;
				}
			}
			
		}
		printf("connjunto A \n");
		for(int i =0; i < 10 ; i++){ 			
			if(conj[i]>0)
			printf("%d \t",conj[i]);
			}
			
			printf("\nconnjunto B \n");
		for(int i =0; i < 10 ; i++){ 			
		if(conjb[i]>0)
		printf("%d \t",conjb[i]);
			}

		printf("\nconnjunto axb \n");
		for(int i =0; i < 10 ; i++){ 			
			if(inter[i]>0){
		
			printf("%d \t",inter[i]);
			}
		}
		

return 0;
}




















