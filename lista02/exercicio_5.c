/*
    Name: Exercício 5 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 04/10/2026
    Description: Faça  uma  função  que  receba  como  parâmetro  um  número,  verifique  se  o  mesmo  é  par,  e  retorne  um 
valor  lógico  (verdadeiro  ou  falso).  O  algoritmo  devera  ler  um  valor  numérico,  chamar  a  função  e  se  o 
resultado for verdadeiro, mostre a mensagem: “O número é par”, do contrário, mostre a mensagem: “O 
número é ímpar”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica_par(int numero){
    int par;

    if (numero % 2 == 0){
        par = 1;
    }
    else{
        par = 0;
    }

    return par;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    int numero, resultado;

    scanf("%d", &numero);

    resultado = verifica_par(numero);

    if (resultado == 1){
        printf("O número é par\n");
    }
    else{
        printf("O número é ímpar\n");
    }

    return 0;
}