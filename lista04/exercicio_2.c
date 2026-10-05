/*
    Name: Exercício 2 da lista de exercícios 4
    Author: Roniel Magalhães Costa
    Date: 02/10/2026
    Description: Faça um algoritmo que leia o primeiro nome e o sobrenome de uma pessoa, copie o primeiro 
nome  para  uma  nova  variável  e  depois  acrescente  o  sobrenome  a  ela,  formando  o  nome 
completo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    char primeiro_nome[100], sobrenome[100];

    scanf("%s", primeiro_nome);
    scanf("%s", sobrenome);

    printf("%s%s\n", primeiro_nome, sobrenome);

    return 0;
}