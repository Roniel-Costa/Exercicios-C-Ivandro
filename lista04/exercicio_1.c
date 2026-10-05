/*
    Name: Exercício 1 da lista de exercícios 4
    Author: Roniel Magalhães Costa
    Date: 02/10/2026
    Description: Faça um algoritmo que leia o nome completo de uma pessoa (com espaços) e exiba o nome 
digitado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    char nome[100];

    scanf("%s", nome);

    printf("%s\n", nome);

    return 0;
}