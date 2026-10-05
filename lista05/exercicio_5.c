/*
    Name: Exercício 5 da lista de exercícios 5
    Author: Roniel Magalhães Costa
    Date: 03/10/2026
    Description: Elabore  um  algoritmo  recursivo  que  calcule  o  máximo  divisor  comum  entre  dois  inteiros 
positivos, baseado no algoritmo de Euclides, implementando uma função inteira de nome mdc 
que  irá  receber  os  dois  números,  sem  utilizar  laços  de  repetição,  encerrando  a  recursão 
quando o segundo número for igual a zero. 
Exemplo: mdc(48, 18) deve retornar 6.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdc(int x, int y){
    int retorno;

    // CASO BASE: Conforme o enunciado, encerra quando o segundo número (y) for zero
    if (y == 0){
        retorno = x;
    }
    // CASO RECURSIVO: Passa o 'y' e o RESTO da divisão de 'x' por 'y' para a próxima chamada
    else{
        retorno = mdc(y, x % y);
    }

    return retorno;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    int n1, n2, resultado;

    // Leitura dos dois valores inteiros positivos
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Chamada da função recursiva passando os dois números digitados
    resultado = mdc(n1, n2);

    // Exibe o resultado final do MDC (que será 6 se digitar 48 e 18)
    printf("%d\n", resultado);

    return 0;
}