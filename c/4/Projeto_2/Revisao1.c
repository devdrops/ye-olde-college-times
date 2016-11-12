/*****************************************************************
	Revisão 1 - Este programa faz a leitura de uma estrutura
			    e depois grava os dados em um arquivo texto, de-
				pois o programa faz a leitura da estrutura e 
				imprime uma lista com algumas das informações

	Autor: Fernando Salles Claro
	Data.: 20/09/2010
*****************************************************************/

// Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sCadastro {
	int codigo;
	char nome[45];
};

int menu(void) {
	int opcao;

	system("clear");  // para o windows: system("cls");
	printf("Menu Principal\n");
	printf("==============\n\n\n");
	printf("1 - Inserir dados\n");
	printf("2 - Imprimir dados\n");
	printf("3 - Encerrar programa\n\n");
	
	printf("Digite a sua escolha: ");
	scanf("%d", &opcao);
	
	return opcao;
}

void inserir(void) {
	FILE *arq;
	struct sCadastro cadastro;
	char opcao;

	arq= fopen("/root/lista.txt", "w+");

	if (arq == NULL)
	{
		printf("Erro na abertura do arquivo. Rotina cancelada.\n\n");
		printf("Aperte algo para continuar");
		return;
	}	

	for(;;) {
		printf("Entre com o código (digite 0 para encerrar): ");
		scanf("%d", &cadastro.codigo);

		if (cadastro.codigo == 0)
			break;

		getchar();

		printf("Entre com o nome: ");
		gets(cadastro.nome);

/*		printf("Deseja inserir mais dados? (S/N): ");
		opcao=getchar();	
	
		if (opcao == 'N' || opcao == 'n')
			break;
*/
	}
}
void imprimir(void) {}

int main() {
	int escolha=0;
	
	for(;;) {
		escolha= menu();
		if (escolha == 1) {
			inserir();
			continue;
		}
		if (escolha == 2) {
			imprimir();
			continue;
		}
		if (escolha == 3)
			break;
		getchar();
		printf("Opção inválida\n\n");
		getchar();
	}

	return 0;
}

