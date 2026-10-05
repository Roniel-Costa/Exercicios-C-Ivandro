/*
    Name: Exercício 5 da lista de exercícios 3
    Author: Roniel Magalhães Costa
    Date: 01/10/2026
    Description: Crie  uma  sub-rotina que  receba  um  total  de  segundos  e devolva, ao mesmo tempo,  quantas 
horas completas, quantos minutos e quantos segundos restam. O algoritmo principal lê o total 
de  segundos,  chama  a  sub-rotina  e  exibe  o  resultado  no  formato  "X  horas,  Y  minutos  e  Z 
segundos". 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converte_segundos(int total_segundos, int horas, int minutos, int segundos){
    horas = total_segundos / 3600;

    total_segundos = total_segundos % 3600;

    minutos = total_segundos / 60;

    segundos = total_segundos % 60;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    int total_segundos, horas, minutos, segundos;

    scanf("%d", &total_segundos);

    converte_segundos(total_segundos, horas, minutos, segundos);

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}