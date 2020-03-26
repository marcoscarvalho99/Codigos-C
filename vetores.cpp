#include <stdio.h>
#include <stdlib.h>


int main ()
{

	int vetA[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int vetB[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int vetc[20],c=2;
	int a=0, b=0;
	for(int i=0;i<20;i++){
		
		if(c%2==0){
			vetc[i]=vetA[a];
			a++;
		} else 
			vetc[i]=vetB[b];
			b++;
			
		c++;
	}
	for(int i=0;i<20;i++){
		printf("%d ",vetc[i]);
	}
	return 0;
}

