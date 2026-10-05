/*
    Name: Exercício 3 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Crie  uma  sub-rotina  ordena3(a,  b,  c)  que  recebe  três  números  e  os  exibe  em  ordem  crescente.  O 
algoritmo principal lê três valores e chama a sub-rotina.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordena3(float a, float b, float c){
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

    printf("%f, %f, %f\n", a, b, c);
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    ordena3(a, b, c);

    return 0;
}