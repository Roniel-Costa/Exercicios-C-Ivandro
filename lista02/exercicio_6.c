/*
    Name: Exercício 6 da lista de exercícios 2
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description:   Crie  uma  função  que  recebe  horas,  minutos  e  segundos  e  retorna  o  total  em  segundos.  Depois,  crie  a 
função  inversa:  recebe  um  total  de  segundos  e  retorna  quantas  horas  completas,  minutos  e  segundos 
restam  —  mas  como  uma  função  só  retorna  um  valor,  faça  a  conversão  inversa  usando  três  funções 
(uma para horas, uma para minutos, uma para segundos). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int converte_totalsegundos(int horas, int minutos, int segundos){
    int converte_totalsegundos;

    converte_totalsegundos = (horas * 3600) + (minutos * 60) + segundos;

    return converte_totalsegundos;
}

int converte_horas(int total_segundos){
    int converte_horas;

    converte_horas = total_segundos / 3600;

    return converte_horas;
}

int converte_minutos(int total_segundos){
    int sobra;
    int converte_minutos;

    sobra = total_segundos % 3600;
    converte_minutos = sobra / 60;

    return converte_minutos;
}

int converte_segundos(int total_segundos){
    int sobra;
    int converte_segundos;

    sobra = total_segundos % 3600;
    converte_segundos = sobra % 60;

    return converte_segundos;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    int horas, minutos, segundos, total_segundos, escolha, resultado;

    printf("Menu de opções\n1_ Converter segundos em horas e minutos\n2_ Converter horas minutos em segundos\n0_ Para sair\n");
    scanf("%d", &escolha);

    while (escolha != 0){
        switch (escolha){
            case 1:
                scanf("%d", &total_segundos);
                resultado = converte_horas(total_segundos);
                printf("%d\n", resultado);
                resultado = converte_minutos(total_segundos);
                printf("%d\n", resultado);
                resultado = converte_segundos(total_segundos);
                printf("%d\n", resultado);
                break;

            case 2:
                scanf("%d", &horas);
                scanf("%d", &minutos);
                scanf("%d", &segundos);
                resultado = converte_totalsegundos(horas, minutos, segundos);
                break;

            default:
                printf("Tchau\n");
        }
        scanf("%d", &escolha);
    }

    return 0;
}