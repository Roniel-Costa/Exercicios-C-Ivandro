/*
    Name: Exercício 4 da lista de exercícios 3
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Crie uma sub-rotina que receba três números inteiros e os organize em ordem crescente, de 
modo que as variáveis do programa principal fiquem com os valores já ordenados. O algoritmo 
principal lê três valores, chama a sub-rotina e exibe os valores ordenados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordem_crescente(float a, float b, float c){
    float aux;

    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c){
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c){
        aux = b;
        b = c;
        c = aux;
    }
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    ordem_crescente(a, b, c);

    printf("%f, %f, %f\n", a, b, c);

    return 0;
}