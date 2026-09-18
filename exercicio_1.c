/*
    Name:
    Author:
    Date:
    Description
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void desenhaRetangulo (int largura, int altura){
    int i, j; //i = largura e j = altura
    
    for (int j = 0; j < altura; j++){
        for(int i = 0; i < largura; i++) {
            printf ("*");
        }
    
        printf("\n");
    }
}



int main (){
    setlocale(LC_ALL, "portuguese");
    
    int largura = 8, altura = 9;
    
    desenhaRetangulo(largura, altura);
    
    return 0;
}