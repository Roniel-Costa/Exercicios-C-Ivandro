/*
    Name: Exercício 3 da lista de exercícios 3
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Crie uma sub-rotina que receba um vetor de números inteiros e o seu tamanho e devolva, ao 
mesmo  tempo,  a  soma  e  a  média  dos  elementos.  O  algoritmo  principal  preenche  o  vetor, 
chama a sub-rotina e exibe os dois resultados. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma_media(float vetor[], float soma, float media){
    int i;
    soma = 0;

    for (i = 1; i <= 3; i++){
        soma = soma + vetor[i];
    }

    media = soma / 3;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float vetor[3], soma, media;
    int j;

    for (j = 1; j <= 3; j++){
        scanf("%f", &vetor[j]);
    }

    soma_media(vetor, soma, media);

    printf("A soma é %f e a media é %f\n", soma, media);

    return 0;
}