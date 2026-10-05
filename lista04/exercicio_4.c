/*
    Name: Exercício 4 da lista de exercícios 4
    Author: Roniel Magalhães Costa
    Date: 02/10/2026
    Description: Faça um  programa  em  linguagem  C  que  leia  uma  frase  e  um  caractere,  e  informe  a  posição 
da primeira ocorrência desse caractere. Depois, leia uma palavra e diga se ela aparece dentro 
da frase. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    char frase[100], palavra[20], caractere;
    int i, j, posicao;
    int identica, achou_palavra;

    scanf("%s", frase);
    scanf(" %c", &caractere);
    scanf("%s", palavra);

    posicao = 0;
    for (i = 1; i <= 100; i++){
        if (frase[i] == caractere){
            if (posicao == 0){
                posicao = i;
            }
        }
    }

    if (posicao > 0){
        printf("Posição do caractere: %d\n", posicao);
    }
    else{
        printf("Caractere não encontrado\n");
    }

    achou_palavra = 0;

    for (i = 1; i <= 100; i++){
        // Se a letra da frase bater com a primeira letra da palavra, investigamos as próximas
        if (frase[i] == palavra[1]){
            identica = 1;

            // Testa as próximas letras (assumindo tamanho máximo 20 para a palavra)
            for (j = 1; j <= 20; j++){
                if (palavra[j] != '\0'){
                    if (frase[i + j - 1] != palavra[j]){
                        identica = 0;
                    }
                }
            }

            if (identica == 1){
                achou_palavra = 1;
            }
        }
    }

    if (achou_palavra == 1){
        printf("A palavra aparece dentro da frase\n");
    }
    else{
        printf("A palavra não aparece na frase\n");
    }

    return 0;
}