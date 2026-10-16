/*
    Name: Exercício 3 lista 6
    Author: Roniel Magalhães Costa
    Date: 15/10/2026
    Description: Elaborar um programa que cadastre os 15 registros de pessoas (nome e altura) e, por meio de 
    um menu, execute: 
        a) cadastrar os 15 registros; 
        b) apresentar os registros (nome e altura) das pessoas com 1,5 m ou menores; 
        c) apresentar os registros das pessoas com mais de 1,5 m; 
        d) apresentar os registros das pessoas com altura acima da média. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

struct PESSOAS{
    char nome[50];
    float altura;
};
struct PESSOAS registro_pessoas[3];

int main (void){
    setlocale(LC_ALL, "portuguese");

    float ACM = 0;
    float ME = 0;
    char OP;

    printf("\tMenu de opções \n");
    printf("1_ Cadastrar \n");
    printf("2_ Menores que 1,5m\n");
    printf("3_ Maiores que 1,5m\n");
    printf("4_ Altura acima da média\n");
    printf("Digite a opção desejada \n");

    
    while (OP != '0')
    {
        //scanf("%i", &OP);
        OP = getch();

        //getchar();

        switch (OP)
        {
        case '1':

            for (int i = 0; i < 3; i++)
            {
                printf("Nome: ");
                scanf(" %[^\n]", registro_pessoas[i].nome);
                printf("Altura: ");
                scanf("%f", &registro_pessoas[i].altura);                
                ACM = ACM + registro_pessoas[i].altura;
                
                getchar();

            }
            
            ME = ACM/3;

            break;

        case '2':
            for(int i = 0; i < 3; i++)
            {
                if (registro_pessoas[i].altura < 1.5)
                {
                    printf("Aluno %i: %s", (i+1), registro_pessoas[i].nome);
                    printf(" %.2f", registro_pessoas[i].altura);
                    printf("\n");
                }
                
            }

            break;

        case '3':
            for(int i = 0; i < 3; i++)
            {
                if (registro_pessoas[i].altura > 1.5)
                {
                    printf("Aluno %i: %s", (i+1), registro_pessoas[i].nome);
                    printf(" %.2f", registro_pessoas[i].altura);
                    printf("\n");
                }
                
            }

            break;

        case '4':
            for(int i = 0; i < 3; i++)
            {
                if (registro_pessoas[i].altura > ME)
                {
                    printf("Aluno %i: %s", (i+1), registro_pessoas[i].nome);
                    printf(" %.2f", registro_pessoas[i].altura);
                    printf("\n");
                }
                
            }

            break;
        }

        printf("Digite a opção desejada \n");
    }

    system("pause");

}
