/*
    Name: Exercício 6 da lista de exercícios 4
    Author: Roniel Magalhães Costa
    Date: 02/10/2026
    Description: Faça um programa em linguagem C que leia uma frase e a separe em palavras, exibindo cada 
palavra em uma linha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    char frase[100];
    int i;

    scanf("%s", frase);

    for (i = 1; i <= 100; i++){
        if (frase[i] != ' '){
            printf("%c", frase[i]);
        }
        else{
            printf("\n");
        }
    }

    return 0;
}