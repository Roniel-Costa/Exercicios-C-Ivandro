/*
    Name: Exercício 4 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 04/10/2026
    Description: Desenvolva  uma  função  que  receba  a  base  e  a  altura  de  um  triângulo  e  retorne  sua  área.  Depois,  no 
algoritmo principal, leia os valores, chame a função e exiba a área calculada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcula_area(float base, float altura){
    float area;

    area = (base * altura) / 2;

    return area;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float base, altura, area;

    scanf("%f", &base);
    scanf("%f", &altura);

    area = calcula_area(base, altura);

    printf("%f\n", area);

    return 0;
}