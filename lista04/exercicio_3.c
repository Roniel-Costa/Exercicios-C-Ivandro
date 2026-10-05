/*
    Name: Exercício 3 da lista de exercícios 4
    Author: Roniel Magalhães Costa
    Date: 02/10/2026
    Description: Faça um algoritmo que peça ao usuário para digitar uma senha. Se a senha for "segredo", o 
programa deve cumprimentá-lo; caso contrário, deve avisar que a senha está incorreta. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    char segredo[100], senha[100];
    strcpy(segredo, "segredo");

    scanf("%s", senha);

    if (strcmp(senha, segredo) == 0){
        printf("Bem vindo ao sistema com a senha mais facil do mundo\n");
    }
    else{
        printf("Senha incorreta\n");
    }

    return 0;
}