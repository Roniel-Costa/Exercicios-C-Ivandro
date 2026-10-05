/*
    Name: Exercício 2 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 24/09/2026
    Description: Crie uma sub-rotina exibeMenu() que mostra as opções de uma calculadora (1-somar, 2-subtrair, 3-
multiplicar, 4-dividir, 0-sair). O algoritmo principal usa um laço que chama o menu, lê a opção e executa
a operação. As quatro operações devem ser funções separadas.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibeMenu (void)
{
    printf("Escolha uma opção:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
}

double soma (double valor1, double valor2)
{
    double soma = valor1 + valor2;

    return soma;
}

double subtrair (double valor1, double valor2)
{
    double subtrair = valor1 - valor2;

    return subtrair;
}

double multiplicar (double valor1, double valor2)
{
    double multiplicar = valor1 * valor2;

    return multiplicar;
}

double dividir (double valor1, double valor2)
{
    double dividir = valor1 / valor2;

    return dividir;
}

void print_resultado (double resultado)
{
    printf("O resultado é %.2f", resultado);

}

int main (void)
{
    setlocale(LC_ALL, "portuguese");
    
    int escolha;
    double valor1, valor2, resultado;
    exibeMenu();

    printf("Digite a sua escolha ");
    scanf("%i", &escolha);

    printf("Digite o primeiro valor\n", valor1);
    scanf("%lf", &valor1);

    printf("Digite o segundo valor\n", valor2);
    scanf("%lf", &valor2);

    switch (escolha)
    {
    case 1:    
        resultado = soma(valor1, valor2);
        print_resultado(resultado);
        break;
    
    case 2:
        resultado = subtrair(valor1, valor2);
        print_resultado(resultado);
        break;

    case 3:
        resultado = multiplicar(valor1, valor2);
        print_resultado(resultado);
        break;

    case 4:
        resultado = dividir(valor1, valor2);
        print_resultado(resultado);
        break;

    default:
        printf("Fechando a calculadora :(");
        break;
    }
}