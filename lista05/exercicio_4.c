/*
    Name: Exercício 4 da lista de exercícios 5
    Author: Roniel Magalhães Costa
    Date: 03/10/2026
    Description: Elabore  um  algoritmo  recursivo  que  localize  um  valor  em  um  vetor  ordenado  de  inteiros, 
aplicando  a  estratégia  de  divisão  do  problema  em  metades  sucessivas,  implementando  uma 
função  inteira  de  nome  buscaBinaria  que  irá  receber  o  vetor,  as  posições  inicial  e  final  e  o 
valor procurado, retornando a posição do elemento encontrado ou -1 caso ele não exista, sem 
utilizar laços de repetição, encerrando a recursão quando o intervalo se esvaziar ou o valor for 
encontrado. 
Exemplo: para o vetor {1, 3, 5, 7, 9} e o valor 5, deve retornar a posição 2. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int buscaBinaria(float v[], int ini, int fim_v, float num){
    int meio;
    int retorno;

    // CASO BASE 1: Se o intervalo se esvaziar, o número não existe
    if (ini > fim_v){
        retorno = -1;
    }
    else{
        // Calcula a posição do meio usando a função do slide 29
        meio = (int)((ini + fim_v) / 2);

        // CASO BASE 2: Se o valor for encontrado no meio
        if (num == v[meio]){
            retorno = meio;
        }
        // CASO RECURSIVO 1: Busca na metade esquerda
        else if (num < v[meio]){
            retorno = buscaBinaria(v, ini, meio - 1, num);
        }
        // CASO RECURSIVO 2: Busca na metade direita
        else{
            retorno = buscaBinaria(v, meio + 1, fim_v, num);
        }
    }

    return retorno;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float vetor;
    int i, resultado, p_inicio, p_fim;

    for (i = 1; i <= 5; i++){
        scanf("%f", &vetor[i]);
    }

    p_inicio = 1;
    p_fim = 5;

    // Chamada usando os novos nomes das variáveis de posição
    resultado = buscaBinaria(vetor, p_inicio, p_fim, 5);

    printf("%d\n", resultado);

    return 0;
}