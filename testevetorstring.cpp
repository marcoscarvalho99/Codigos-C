#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

char str[20],strc[20];

////printf(">>");
fgets(str,20, stdin);
setbuf(stdin,NULL);
printf(">>");
fgets(strc,20,stdin);

if(strcmp(str,strc) == 0) printf("iguais");
else printf("diferentes");
////
////
setbuf(stdin,NULL);
////printf("%d",strlen(str));
////strcpy(strc,str);
////strcat(strc,str);
////printf("%s",strc);

//fputs(str,stdout);

return 0;
}

