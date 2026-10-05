/*
    Name: Exercício 7 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Faça uma função do tipo numérico que calcule o valor da diagonal, a função irá receber por parâmetro 
duas  medidas  e  retornar  o  valor  da  diagonal.  O  algoritmo  devera  ler  as  medidas  de  três  lados  de  um 
paralelepípedo: a, b e c. Calcular e mostrar os valores de L e D.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float calcula_L_D(float a, float b){
    float calcula_L_D;

    calcula_L_D = sqrt(pow(a, 2) + pow(b, 2));

    return calcula_L_D;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float a, b, c, L, D;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    L = calcula_L_D(a, b);

    D = calcula_L_D(L, c);

    printf("%f, %f\n", L, D);

    return 0;
}