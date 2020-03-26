#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int tam;
	printf("digite a quantidade: ");
	scanf("%d",&tam);
	int vet[tam],aux;
	
	for(int i=0; i< tam;i++){
		printf("digite o vetor %d: ",i+1);
		scanf("%d",&vet[i]);
		
	}
	
		for(int i=1; i< tam;i++){
			
			for(int j=0; j < tam;j++){
				if(vet[j]<vet[j+1]){
				aux=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
				}
				
			}
		}
			printf("\n     vetor ordenado \n");
	for(int i=0; i< tam;i++){
	
	printf(" %d \n",vet[i]);
	}
	return 0;
}
	
//	questao 6 andre bakhers.
//	char nome[20],caracter;
//	int cont=0;
//	gets(nome);
//	setbuf(stdin,NULL);
//	
//	for(int i=0;i<20;i++){
//		
//		if(nome[i]=='a' ||nome[i]=='e' ||nome[i]=='i' ||nome[i]=='o' ||nome[i]=='u' ){
//		cont ++;}
//	}
//	printf("%d",cont);
//	scanf("%c",&caracter);
//	for(int i=0;i<20;i++){
//		
//		if(nome[i]=='a' ||nome[i]=='e' ||nome[i]=='i' ||nome[i]=='o' ||nome[i]=='u' ){
//		nome[i]=caracter;
//		}
//	}
//	printf("%s",nome);
//return 0;	
//}
	//questao 4.andre
//	char nome[20];
//	fgets(nome,20,stdin);
//	
//	for(int i=19;i>=0;i--){
//		printf("%c",nome[i]);
//	}
//	
//	
//	
//	
//return 0;	
//}
//questaio 3 andre backers
//	char str[30];
//	fgets(str,30,stdin);
//	int cont=0,con=0;
//	
//	for(int i=0; str[i] != '\0' ;i++){
//		cont++;
//		printf("%d",i);
//	}
//	printf("\n %d",cont-1);
//	
//	con=strlen(str);
//	printf("\n %d",con);
//	return 0;
//}

