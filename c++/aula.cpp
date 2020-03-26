#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void mai()
{
	int k=1;
	
	for(int i=1,l=1; i <=10; i++,l++){
	
	
	
		for(int j=1; j <i; j++){
		if(k==1)	
			printf("       \t   *   \t  ",k);
		else
			printf("\t*");
		k++;
		
		}
		printf("\n \n \n ");
	} 
	
}


void maines (){
	
	float temp[12], maior, menor;
	int mes1, mes2;
	
	for( int i=1; i <= 12; i++)
	{ 
		printf("digite a temperatura do mes %d>>",i);
		scanf("%f", &temp[i]);
		
		
		if ( i == 1){
			maior = temp[i];
			menor = temp[i];
			mes1= i;
			mes2=i;
		}
		
		if ( maior < temp[i]){
			
			maior= temp[i];
			mes1=i;
		}
		if  ( menor > temp[i]){
			
			menor= temp[i];
			mes2=i;
		}
	}	
	
	printf(" %.1f foi a maior temperatura no mes %d  \n --------------------\n %.1f foi a menor temperatura no mes %d",maior,mes1,menor,mes2);
	
	
	
}




//questao 1 da lista 5
void maq() {
	
	int i, num[10],pos;
	
	
	
	for ( i=0; i < 10;i++){
		
		printf("numero %d>> ",i+1);
		scanf(" %d",&num[i]);
		
		
	} 
	
	
	for (i=0;i <10; i++){
		
		if ( num[i] > 50){ 
			
			pos=i; 
			printf(" %d posicao %d ",num[i],i+1);
		} 
		
		
		
	}
	
	if ( num[0] < 50 && num[1] < 50 && num[2] < 50 &&num[3] < 50 &&num[4] < 50 &&num[5] < 50 &&num[6] < 50 &&num[7] < 50 &&num[8] < 50 &&num[9] < 50 )
			printf(" nenhum numero esta dentro do padrao");
	
	
	
	
	
	
}





void questao3(){
	
	int vet[5]; 
	float soma;
	
	for(int i=0;i <5 ; i++){
	
		printf("vet %d>>",i);
		scanf("%d",&vet[i]);
		
		soma+=vet[i];
	}
	for(int i=0;i <5 ; i++){
		printf(" %d   ", vet[i]);
	}
	
	printf("\n media %f \n", soma/5);
	
	
}


int main (){
	int num[10];
	int l[10],i=0,j=0, cont=0;
	srand(time(NULL));
	for ( i ,j ; i < 10; i++, j++){
	
		
	
	
		num[i]=rand()%6;
	
		
		
		l[i]==num[i];
			
		
		
		printf(" %d  ", num[i]);
		
			printf(" \n \n");
			
		for ( i,j =10 ; i < 10; j--){
		
		if ( num[i] == l[j])
		
		printf("%d num[i]  vezes %d", cont++);
		}
	
	
	}
	
	return 0;
}
