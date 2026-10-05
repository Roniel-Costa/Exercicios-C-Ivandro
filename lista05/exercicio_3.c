/*
    Name: Exercício 3 da lista de exercícios 5
    Author: Roniel Magalhães Costa
    Date: 03/10/2026
    Description: Elabore um algoritmo recursivo que inverta os caracteres de uma string, modificando a própria 
string  sem  utilizar  uma  string  auxiliar,  implementando  uma  função  de  nome  inverter  que  irá 
receber  a  string  e  as  posições  inicial  e  final,  que  delimitam  o  intervalo  a  ser  invertido,  sem 
utilizar  laços  de  repetição,  encerrando  a  recursão  quando  as  posições  se  cruzarem  ou 
coincidirem. 
Exemplo: a string "recursao" deve tornar-se "oasrucre". 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inverter(char string[], int inicio, int fim){
    char aux;
    int retorno;

    if (inicio < fim){

        aux = string[inicio];
        string[inicio] = string[fim];
        string[fim] = aux;

        inverter(string, inicio + 1, fim - 1);

    }
    else{
        retorno = 1;
    }

    return retorno;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    char string[10];
    int inicio, fim;

    inicio = 1;
    fim = 10;

    scanf("%s", string);

    inverter(string, inicio, fim);

    printf("%s\n", string);

    return 0;
}