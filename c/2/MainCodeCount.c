// DECLARANDO AS BIBLIOTECAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LibCodeCount.h"

int main(int argc, char *argv[])
{
	//DECLARANDO AS VARIAVEIS
	// VARIVEL DECLARADA COM * REPRESETA PONTEIRO

	char nomeArq[80];
	int cont2=0;
	//LIMPANDO A TELA
	system("cls");

	// SOLICITA O ARQUIVO PARA O USUÁRIO
	printf("Qual o nome do Arquivo? ");
	gets(nomeArq);
	cont2 = Ccomentario(nomeArq);
	printf("%d Linhas de comentario!\n",cont2);
	system("pause");
  return 0;
}


