#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main ()
{
	char str[10][30], aux[30];
	
	for(int i=0;i < 10; i ++){
		gets(str[i]);
		setbuf(stdin,NULL);
	}
	
	for(int i=1;i < 10; i ++){
		for(int j=0;j < 10; j ++){
			if(strcasecmp(str[j],str[j+1])>0){
				strcpy(aux,str[j]); 
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],aux);
			}	
		}
	}
			printf("\n");
	for(int i=0;i < 10; i ++){
		printf("%s\t",str[i]);
	}
	return 0;
}
//	int vet[10],aux;
//	srand(time(NULL));
//	for(int i=0;i < 10; i ++){
//	vet[i]=rand()%50;
//	
//}
//	for(int i=1;i < 10; i ++){
//		for(int j=0;j < 10; j ++){
//			if(vet[j]>vet[j+1]){
//			
//			aux=vet[j];
//			vet[j]=vet[j+1];
//			vet[j+1]=aux;
//			
//			}
//	
//		}	
//	
//	}
//	for(int i=0;i < 10; i ++)
//	printf("%d \t",vet[i]);
//	
//return 0;
//}

