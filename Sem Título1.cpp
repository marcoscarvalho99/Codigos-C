#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main ()
{
	
	for(int i=0; i < 8 ;i++){
		for(int j=0; j < 4 ;j++){
					if(i%2==0){
						printf("  *");
					}else printf("*  ");
		}printf("\n");
	}
	
	return 0;
}
//xadrez	srand(time(NULL));
//	int t;
//	scanf("%d",&t);
//	char vet [t][t]={};
//	for(int i=0;i <t;i++){
//		for(int j=0;j <t;j++){
//			vet[i][j]='*';
//			if(i%2!=0){if(j%2!=0){ 
//
//				vet[i][j]=' ';
//				}
//			}
//			if(i%2==0){if(j%2==0){ 
//
//				vet[i][j]=' ';
//				}
//			}
//		//vet[i][j]='*';	
//		}
//	}
//	printf("   A B C D E F G H\n\n");
//	for(int i=0;i <t;i++){
//		printf("%d  ",i+1);
//		for(int j=0;j <t;j++){
//			
//			printf("%c ",vet[i][j]);
//		}printf("\n");
//	}
//	
	
	
	
//	
//	return 0;
//}
