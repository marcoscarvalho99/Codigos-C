#include <stdio.h>
#include <stdlib.h>
#define TAM 10
//questão 5 da atv 1 de vetor.
int main ()
{
	//declaração das variaveis que iramos usar.
	int array[TAM];
	int aux, contador;
	//o primeiro for ele ler o que o usuario ira digitar e armazena na posição do vetor
	for(int i= 0 ; i < TAM; i++){
		
		scanf("%d",&array[i]);
	}
	printf("  numeros atuais de ordenacao digitada \n");
	//o segundo for printa a ordem aleatoria do vetor digitado.
	for(int i= 0 ; i < TAM; i++){
		printf("   %d  \t",array[i]);
	}
	//o terceiro e quarto for é o cod chave que faz a troca dos valores.
	for(contador=1; contador < TAM; contador ++){
		
		for( int i= 0 ; i < TAM; i++){
			//compara e faz a troca se necessario.
			if (array[i] > array[i+1]){
				
				aux= array[i];
				array[i]=array[i+1];
				array[i+1]=aux;
			}
		
				
		}
		
	}
	//printa a ordem crescente.
	printf(" \n ARRAY ORDENADO \n");
	for(int i= 0 ; i < TAM; i++){
		printf("  %d  \t",array[i]);
	}
	
	return 0;
}

