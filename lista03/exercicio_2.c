/*
    Name: Exercício 2 da lista de exercícios 3
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Crie uma sub-rotina que receba dois números inteiros e devolva, ao mesmo tempo, o maior e 
o menor valor entre eles. O algoritmo principal lê dois valores, chama a sub-rotina e exibe os 
dois resultados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maior_menor(float valor1, float valor2, float maior, float menor){
    if (valor1 > valor2){
        maior = valor1;
        menor = valor2;
    }
    else{
        maior = valor2;
        menor = valor1;
    }
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float maior, menor, valor1, valor2;

    scanf("%f", &valor1);
    scanf("%f", &valor2);

    maior_menor(valor1, valor2, maior, menor);

    printf("%f, %f\n", maior, menor);

    return 0;
}