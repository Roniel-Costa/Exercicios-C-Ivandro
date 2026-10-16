/*
	Name: exerc�cio de fixa��o 2, aula 10
	Author: 
	Date: 15/10/26 19:37
	Description: Declare um registro ALUNO com os
	campos: matr�cula (num�rico), nome (literal), 
	curso (literal) e coeficiente de rendimento (num�rico).
	Em seguida, declare um conjunto chamado TURMA que comporte
	40 alunos. Escreva um algoritmo que leia os dados de todos
	os 40 alunos da TURMA e, em seguida, escreva o nome e o 
	coeficiente de rendimento de cada um deles
*/

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<locale.h>

struct ALUNO{			//declare ALUNO registro (
   long int MATRICULA;	//	MATRICULA  num�rico,
   char 	NOME[50];	//	NOME       literal,
   char 	CURSO[30];  // 	CURSO      literal,
   int 		CR; 		// 	CR         num�rico
};		     			//)
struct ALUNO TURMA[40]; 		//declare TURMA[40] ALUNO

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n\tSistema de gerenciamento de aluno\n");
	int i; 								//declare i num�rico
	printf("\nDigite dados alunos");
	for(i=0;i<4;i++)					//para i ? 1 at� 40 fa�a passo 1
	{									//in�cio
		printf("\nAluno %i\nMatr�cula: ",i+1);
		scanf("%i",&TURMA[i].MATRICULA); 	//leia TURMA[i].MATRICULA
		printf("Nome: ");
		scanf(" %[^\n]s",TURMA[i].NOME);	//leia TURMA[i].NOME
		printf("Curso: ");
		scanf(" %[^\n]s",TURMA[i].CURSO);	//leia TURMA[i].CURSO
		printf("Coeficiente de rendimento: ");
		scanf("%i",&TURMA[i].CR); 			//leia TURMA[i].CR
	}									//fim
	printf("\n\nAlunos cadastrados");
	for(i=0;i<4;i++)					//para i ? 1 at� 40 fa�a passo 1
	{									//in�cio
 		printf("\n%i�: %s",i+1, TURMA[i].NOME);	//escreva TURMA[i].NOME
 		printf(", %i", TURMA[i].CR);			//escreva TURMA[i].CR
	}									//fim
	printf("\n\n");
	system("pause");
	return 0;
}

