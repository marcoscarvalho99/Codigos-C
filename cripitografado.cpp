#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	
	char vet[10][30], aux[30];
	
	for(int i=0; i < 10 ; i++){
		gets(vet[i]);
		
		
	}
	for(int i=1; i < 10;i++){
		
		for(int j=0; j < 9 ;j++){
			if(strcasecmp(vet[j],vet[j+1])>0){
				strcpy(aux,vet[j]);
				strcpy(vet[j],vet[j+1]);
				strcpy(vet[j+1],aux);
			}
			
			
		}
	}
	printf("ordenado\n\n");
	for(int i=0; i < 10 ; i++){
		printf("  %s  ",vet[i]);	
	}
	return 0;
}
//palindro moint main ()
//{
//	
//	char nome[50],aux[50];;
//	int tam;
//	
//	gets(nome);
//	setbuf(stdin,NULL);
//	
//	tam= strlen(nome);
//	strcpy(aux,nome);
//	for(int i= tam-1,j=0;i > tam/2; i--,j++){
//		nome[j]=aux[i];
//		
//		
//	}
//	
//	if(strcasecmp(nome,aux)==0){
//		printf("palindroma");
//	} else printf("nao palindroma");
//	return 0;
//}



//int main ()
//{
//	char nome[30];
//	gets(nome);
//	for(int i=0; i < strlen(nome);i++){
//		
//		if(nome[i] != ' '){
//			
//		nome[i]=nome[i]+3;
//		}
//		
//		
//	}
//	printf("cripitografado \n\n");
//	printf("%s",nome);
//		
//
//return 0;
//}





