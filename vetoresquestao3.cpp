#include <stdio.h>
#include <stdlib.h>
#define tam 20

int main ()
{
	int veta[]={1,2,3,4,5,6,7,8,9,10};
	int vetb[]={11,12,13,14,15,16,17,18,19,20};
	int vetc[tam];
	int a=0,b=0,c=2;


	for(int i=0; i < tam; i++){
			
		if(c%2==0){
			vetc[i]=veta[a];
			a++;
		} 
		if(c%2!=0){
			vetc[i]=vetb[b];
			b++;
		}
	c++;
	}
	
	for(int i=0; i < tam; i++){
	printf("%d  ",vetc[i]);
	
	}
	return 0;
}

