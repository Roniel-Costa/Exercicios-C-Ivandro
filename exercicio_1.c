/*
    Name: Exercício 1 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 24/09/2026
    Description: Crie uma sub-rotina desenhaRetangulo(largura, altura) que exibe um retângulo de asteriscos (*) com as
    dimensões passadas. O algoritmo principal lê largura e altura e chama a sub-rotina. Variação: crie
    também desenhaMoldura (borda apenas, interior vazio).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void desenhaRetangulo (int largura, int altura)
{
    int i, j; //i = largura e j = altura
    
    for (int j = 0; j < altura; j++){
        for(int i = 0; i < largura; i++) {
            printf ("*");
        }
    
        printf("\n");''
    }
}

void desenhaMoldura (int largura, int altura)
{
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

int main (){
    setlocale(LC_ALL, "portuguese");
    
    int largura, altura;

    printf("Qual a largura do retângulo? ");
    scanf("%i", &largura);

    printf("Qual a altura do retângulo? ");
    scanf("%i", &altura);
    
    desenhaRetangulo(largura, altura);

    printf("\n");

    desenhaMoldura(largura, altura);
    
    return 0;
}