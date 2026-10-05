/*
    Name: Exercício 6 da lista de exercícios 5
    Author: Roniel Magalhães Costa
    Date: 03/10/2026
    Description: Elabore  um  algoritmo  recursivo  que  ordene  os  elementos  de  um  vetor  em  ordem  crescente, 
implementando  o  algoritmo  quicksort  estudado  em  aula,  com  uma  função  de  nome  quicksort 
que  irá  receber  o  vetor  e  as  posições  inicial  e  final,  escolhendo  o  pivô  na  posição  central, 
particionando  o  vetor  com  dois  índices  e  invocando  recursivamente  a  ordenação  de  cada 
metade, encerrando a recursão quando não houver mais intervalo a ordenar. 
Exemplo: para o vetor {4, 1, 3, 5, 2}, o resultado deve ser {1, 2, 3, 4, 5}. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int quicksort(float v[], int ini, int fim_v){
    int i, j, controle;
    float pivo, aux;
    int retorno;

    // Define os índices de partição e escolhe o pivô na posição central (pág. 29)
    i = ini;
    j = fim_v;
    pivo = v[(int)((ini + fim_v) / 2)];

    // Processo de partição do vetor baseado no pivô
    while (i <= j){
        while (v[i] < pivo){
            i = i + 1;
        }

        while (v[j] > pivo){
            j = j - 1;
        }

        if (i <= j){
            // Triângulo de troca usando a variável aux (pág. 36)
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;

            i = i + 1;
            j = j - 1;
        }
    }

    // CASO RECURSIVO: Invoca a ordenação para cada metade se houver intervalo (pág. 35)
    if (ini < j){
        controle = quicksort(v, ini, j);
    }

    if (i < fim_v){
        controle = quicksort(v, i, fim_v);
    }

    // CASO BASE: Retorna 1 para encerrar a pilha de execução
    retorno = 1;

    return retorno;
}

int main (void){
    setlocale(LC_ALL, "portuguese");

    float vetor;
    int k, p_inicio, p_fim, resultado;

    // Preenchendo o vetor de exemplo {4, 1, 3, 5, 2} (pág. 14)
    for (k = 1; k <= 5; k++){
        scanf("%f", &vetor[k]);
    }

    p_inicio = 1;
    p_fim = 5;

    // Chamada da função passando o vetor e os limites de posição
    resultado = quicksort(vetor, p_inicio, p_fim);

    // Exibe o vetor já ordenado (pág. 13)
    for (k = 1; k <= 5; k++){
        printf("%f\n", vetor[k]);
    }

    return 0;
}