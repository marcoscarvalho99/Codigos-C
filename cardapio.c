#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 //variaveis globais;
  	int fim =0;
    int pedido=0;
    int qtd=0;
    double valorTotal=0;
   char notaFiscal[100]="";
    //funçoes relativas ao codigo
void cardapio();
void principal();
//função principal
int main(void){
    cardapio();
	principal();
}
//mostrar o cardapio
void cardapio(){
    printf("\t--- CARDAPIO---\n\n");
    printf("CODIGO \t ESPECIFICACAO \t   PRECO\n");
    printf("   1 \t Cachorro quente   4.00$ \n");
    printf("   2 \t X-Salada          4.50$ \n");
    printf("   3 \t x-bacon           5.00$ \n");
    printf("   4 \t torrada simples   2.00$ \n");
    printf("   5 \t refrigerante      1.50$ \n\n\n");
}
//faz todo o sistema de leitura, acumulo de valores e mostrar em saidas
void principal(){
	while(fim!=1){
        printf("Escolha o numero do seu lanche\n");
        scanf("%i",&pedido);
        printf("Escolha a quantidade:");
        scanf("%i",&qtd);
        switch(pedido){
            case 1:{  
                valorTotal+=4.00 * qtd;
                for(int i=0; i < qtd;i++){
                	strcat( notaFiscal, "cachorro-quente, ");
				}
                break;
            }
            case 2:{
                valorTotal+=4.50*qtd;
                for(int i=0; i < qtd;i++){
                	strcat( notaFiscal, "X-salada, ");
				}
                break;
            }
            case 3:{
                valorTotal+=5.00*qtd;
                for(int i=0; i < qtd;i++){
                	strcat( notaFiscal, "X-bacon, ");
				}
                break;
            }
            case 4:{
                valorTotal+=2.00*qtd;
                for(int i=0; i < qtd;i++){
                	strcat( notaFiscal, "Torrada-simples, ");
				}
                break;
            }
            case 5:{
                valorTotal+=1.50*qtd;
                for(int i=0; i < qtd;i++){
                	strcat( notaFiscal, "refrigerante, ");
				}
                break;
            }
            default:{
                printf("por favor digite o indicado no cardapio");
            }
       }
       	printf("Valor total atualizado: %.2f R$\n\n",valorTotal);
        printf("deseja continuar? sim 1 & nao 2:-> ");
        scanf("%d",&pedido);
             if(pedido==1){
			fim=0;
			 }
		    else{
				fim=1;
				printf("Valor final a ser pago: %.2f R$\n\n",valorTotal);	
			}                 
    };
    printf("------nota fiscal-------\n %s",notaFiscal);
}
