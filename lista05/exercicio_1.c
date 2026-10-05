/*
    Name: Exercício 1 da lista de exercícios 5
    Author: Roniel Magalhães Costa
    Date: 03/10/2026
    Description: Elabore  um  algoritmo  recursivo  que  calcule  a  soma  de  todos  os  elementos  de  um  vetor  de 
inteiros,  implementando  uma  função  inteira  de  nome  soma  que  irá  receber  o  vetor  e  o 
tamanho n, em que n é o número de elementos, sem utilizar laços de repetição, encerrando a 
recursão quando não houver mais elementos a somar. 
Exemplo: para o vetor {2, 5, 3}, o resultado deve ser 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float vetor[], int n){
    float soma;

    if (n == 0){
        soma = 0;
    }
    else{
        soma = vetor[n] + soma(vetor, n - 1);
    }

    return soma;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float vetor[3], resultado;
    int i;

    for (i = 1; i <= 3; i++){
        scanf("%f", &vetor[i]);
    }

    resultado = soma(vetor, 3);

    printf("%f\n", resultado);

    return 0;
}