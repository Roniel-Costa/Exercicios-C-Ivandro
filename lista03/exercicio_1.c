/*
    Name: Exercício 1 da lista de exercícios 3
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Crie  uma  sub-rotina  que  receba  um  número  inteiro  e  faça  com  que  a  variável  do  programa 
principal passe a conter o seu dobro. O algoritmo principal lê um valor, chama a sub-rotina e 
exibe o novo valor. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dobro(float valor){
    valor = valor * 2;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float valor;

    scanf("%f", &valor);

    dobro(valor);

    printf("%f\n", valor);

    return 0;
}