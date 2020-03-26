#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define tam 10
int main (){

int nota[5][3],menor[5];


for(int i=0;i<5;i++){
	
	for(int j=0;j<3;j++){
		
		scanf("%d",&nota[i][j]);
		if(j==0){
		menor[i]=j;
		}
		if(menor[i] < nota[i][j]){
			menor[i]=j;
		}
	}

}
for(int i=0;i<5;i++){
	printf("aluno %d =",i+1);
	for(int j=0;j<3;j++){
	printf("%d ",nota[i][j]);
	}printf("\n");
}
printf("\n");
for(int i=0;i<5;i++){
printf(" 0 aluno %d tirou a menor nota na prova %d \n",i+1,menor[i]+1);
}

return 0;
}




//int main (){
//questao 2 listadaavaliacao
//	int vet[10]={1,2,3,4,5,6,7,8,9,10} ,vetB[10] = {11,12,13,14,15,16,17,18,19,20},c[20]={};
//	int j=0, k=0;
//	for(int i=0,m=2;i < 20 ;i++,m++){
//		if(m%2==0){
//			c[i]=vet[j];
//			j++;
//		}
//		if(m%2!=0){
//			c[i]=vetB[k];
//			k++;
//		}
//			
//			
//			
//		
//	}
//	for(int i=0,j=1;i < 20 ;i++){
//	printf("%d ",c[i]);
//	//printf("vetor a %d \n vetor b %d \n ",vet[i],vetB[i]);
//	}
//	return 0;
//}
//questao 1 laura
//	char str[tam][30],aux[30];
//
//	for(int i=0 ; i < tam ; i ++){
//		fgets(str[i],30,stdin);
//		setbuf(stdin,NULL);	
//	
//	
//}
//	for(int i=0 ; i < tam ; i ++){
//		printf("%s\n",str[i]);
//}
//	for(int j=0 ; j < tam ; j ++){
//		for(int i=0 ; i < tam ; i ++){
//			if(strcasecmp(str[i],str[i+1])>0){
//			strcpy(aux,str[i]);
//			strcpy(str[i],str[i+1]);
//			strcpy(str[i+1],aux);
//			}
//		}
//	}
//	printf("\n\nnomes ordenados \n");
//	for(int i=0 ; i < tam ; i ++){
//		printf("%s\n",str[i]);
//}
//	return 0;
//}
//	int t;
//	printf("tamanho: ");
//	scanf("%d",&t);
//	int mat[t][t],vet[t]={};
//	for (int i=0; i< t ; i++){
//		for(int j=0; j< t ; j++){
//		scanf("%d",&mat[i][j]);
//		
//		}
//	}
//	
//	for (int i=0; i< t ; i++){
//		
//		for(int j=0; j< t ; j++){
//		printf("%d ",mat[i][j]);
//		if(j==0){vet[0]+=mat[i][j];
//		}
//		if(j==1){vet[1]+=mat[i][j];
//		}
//		if(j==2){vet[2]+=mat[i][j];
//		}
//		}printf("\n");
//		
//	}
//	for (int i=0; i< t ; i++){
//	
//	printf("%d \t",vet[i]);}
//	return 0;
//}


//int main(){
//	srand(time(NULL));
//	int t;
//	printf("tamanho: ");
//	scanf("%d",&t);
//	int mat[t][t],soma=0;
//	
//	for (int i=0; i< t ; i++){
//		for(int j=0; j< t ; j++){
//		
//			mat[i][j]=rand()%10;	
//		//	scanf("%d",&mat[i][j]);
//			if(i==j){
//			//mat[i][j]=1;
//			//soma+=mat[i][j];
//			}
//			//else mat[i][j]=0;
//		}
//	}
//	for (int i=0; i< t ; i++){
//		
//		for(int j=0; j< t ; j++){
//		printf("%d ",mat[i][j]);
//		
//		}printf("\n");
//		
//	}
//	for (int i=0,j=t-1; i< t ; i++,j--){
//		printf("%d",mat[i][j]);
//		soma+=mat[i][j];
//	}
//		
//	printf("\n soma %d",soma);
//	return 0;
//}


//int main ()
//{
//	int t;
//	printf("tamanho");
//	scanf("%d",&t);
//	int mat[t][t], maior,l,c;
//	
//	
//	for (int i=0; i< t ; i++){
//		for(int j=0; j< t ; j++){
//			
//			scanf("%d",&mat[i][j]);
//			if (i==0){
//			maior=mat[i][j];
//			l=i;
//			c=j;
//			
//			}
//		}
//			
//	}
//	
//	for (int i=0; i< t ; i++){
//		for(int j=0; j< t ; j++){
//			printf("%d ",mat[i][j]);	
//			if(maior < mat[i][j]){
//		
//			maior=mat[i][j];
//			l=i;
//			c=j;
//			}
//		}printf("\n");
//		
//	}
//
//printf("\n\n maior %d\n linha %d \n coluna %d", maior,l,c);
//return 0;
//}

