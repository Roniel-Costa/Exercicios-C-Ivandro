/*
    Name: Exercício 5 da lista de exercícios 4
    Author: Roniel Magalhães Costa
    Date: 02/10/2026
    Description: Faça  um  programa  em  linguagem  C  que  leia  uma  sequência  de  caracteres  do  teclado  até  o 
fim da entrada, conte quantas letras 'a' foram digitadas e exiba o total.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    char caracteres[100];
    int contador, i;

    scanf("%s", caracteres);

    contador = 0;
    for (i = 1; i <= 100; i++){
        if (caracteres[i] == 'a'){
            contador = contador + 1;
        }
    }

    printf("%d\n", contador);

    return 0;
}