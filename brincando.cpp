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
				if(conj[i]==conjb[j]){
					inter[cont++]=conj[j];
					 
				}
			}
			
		}
		for(int i =0; i < 4 ; i++){
		printf("%d \n",inter[i]);
		}
		

return 0;
}


