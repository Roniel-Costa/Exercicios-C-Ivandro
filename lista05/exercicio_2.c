/*
    Name: Exercício 2 da lista de exercícios 5
    Author: Roniel Magalhães Costa
    Date: 03/10/2026
    Description: Elabore um algoritmo recursivo que calcule a potência  xn, com expoente inteiro não negativo, 
implementando  uma  função  inteira  de  nome  potencia  que  irá  receber  a  base  e  o  expoente, 
sem  utilizar  laços  de  repetição  nem  funções  prontas  de  potência,  encerrando  a  recursão 
quando o expoente for igual a zero. 
Exemplo: potencia(2, 5) deve retornar 32. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float potencia(float base, int expoente){
    float retorno;

    if (expoente == 0){
        retorno = 1;
    }
    else{
        retorno = base * potencia(base, expoente - 1);
    }

    return retorno;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float base, resultado;
    int expoente;

    scanf("%f", &base);
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("%f\n", resultado);

    return 0;
}