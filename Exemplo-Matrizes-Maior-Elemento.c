#include <stdio.h>
#include <stdlib.h>

#define LINHA 2
#define COLUNA 3

int main()
{
    int minhaMatriz[LINHA][COLUNA] = {{12, 14, 58}, {52, 96, 37}};
    int i, j;
    int linMaior, colMaior;

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            printf("%i\t", minhaMatriz[i][j]);
        }
        printf("\n");
    }

    linMaior = 0;
    colMaior = 0;
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            if(minhaMatriz[i][j] > minhaMatriz[linMaior][colMaior]){
                linMaior = i;
                colMaior = j;
            }
        }
    }
    printf("\nMaior = %i, linha = %i e coluna = %i\n\n", minhaMatriz[linMaior][colMaior], linMaior, colMaior);

    return 0;
}