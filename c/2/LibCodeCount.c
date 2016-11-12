#include <stdio.h>
#include <string.h>

int Ccomentario (char nomeArq[80])
	{
	FILE *pArq;
	char linha[50];
	int contLinha = 0;
	char LS;
	int cont2 = 0;
	//ABRE O ARQUIVO
	pArq = fopen(nomeArq, "r");
	// TESTA O SUCESSO DA ABERTURA DO ARQUIVO
	if (pArq == NULL)
	{
		//OPS. ERRO NA ABERTURA
		printf("Erro na abertura. Programa cancelado. \n\n");
		return -1; // ENCERRA O PROGRAMA INFORMANDO QUE OCORREU ALGO ANORMAL
	}

	do { //VERIFICA CARACTERE POR CARACTERE DO ARQUIVO.
		LS = fgetc(pArq);
		//BUSCA A PRIMEIRA OCORRÊNCIA DE /
		if (LS==47) {
			LS = fgetc(pArq);
			if (LS==47) {
				cont2++;
				do { // CASO ENCONTROU UMA LINHA DE COMENTÁRIO,
					 // ENTRA EM LAÇO ATÉ ACHAR O FIM DA LINHA.
					LS = fgetc(pArq);
					if (LS==10) {
						break;
					}
				} while (!feof(pArq));
			}
			if (LS==42) { // CASO ACHOU COMEÇO DE BLOCO DE COMENTÁRIO.
				cont2++;
				LS = fgetc(pArq);
				do{ // SE ENCONTROU COMEÇO DO BLOCO,
                	// ENTRA EM LAÇO ATÉ ACHAR FINAL DO BLOCO.
					LS = fgetc(pArq);
					if (LS==10) {
						cont2++;
					}

					if (LS==42) {
						LS = fgetc(pArq);
						if (LS==47) {
							cont2++;
							break;
						}
					}
				} while (!feof(pArq));
			}
		}
	}while (!feof(pArq));

	// FECHANDO O ARQUIVO
	fclose(pArq);
	return cont2;
}

