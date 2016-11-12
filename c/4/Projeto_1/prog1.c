//-----------------------------------------------
//
// Escreva um programa C que tenha uma estru
// tura com (int ra, float nota1, float nota2
// float media), que será um vetor de 10 vezes.
// O programa deve calcular a média de cada
// aluno e por fim imprimir uma listagem dos
// alunos.
//----------------------------------------------

// Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

struct sAcademico {
	int ra;
	float nota1;
	float nota2;
	float media;
};

int main() {
	struct sAcademico alunos[10];

	int cont;

	initscr();

	system("clear");

	// Solicita os dados para o usuário
	for(cont=0;cont<10;cont++)
	{
		refresh();
		printw("Aluno %d:\n",cont+1);
		printw("RA...: ");
		scanf("%d", &alunos[cont].ra);
		printw("Nota1: ");
		scanf("%f", &alunos[cont].nota1);
		printw("Nota2: ");
		scanf("%f", &alunos[cont].nota2);

		// Calcula a média do aluno
		alunos[cont].media = (alunos[cont].nota1 +
							  alunos[cont].nota2) / 2;
	}
	
	// Mostra uma listagem na tela
	system("clear");
	refresh();

	printf("                         Listagem das médias dos alunos\n\n");
	printf("RA        nota 1 nota 2 média\n");
	printf("---------|------|------|------\n\n"); 

	for(cont=0;cont<10;cont++)
	{
		printf("%8d | %2.1f | %2.1f | %2.1f\n",alunos[cont].ra,
			alunos[cont].nota1,alunos[cont].nota2,
			alunos[cont].media);
	}	

	endwin();
	return 0;
}



				


