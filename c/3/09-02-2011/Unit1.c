//---------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
	char Nome[21];
	float Notas[2];
	float Total[2];
	int Peso[2];
	int X;

	// ATRIBUIÇÃO DE VALOR AO VETOR
	strcpy(Nome, "Teste Hoje");
	// APRESENTAÇÃO
	printf("%s\n", "Usuario:");
	// IMPRESSÃO DO VETOR
	printf("%s\n", Nome);

	// PEDE PARA INFORMAR AS NOTAS
	// 1º BIMESTRE
	printf("%s\n", "Informe a Nota do 1º Bimestre:");
	scanf("%f", &Notas[0]);
	// 2º BIMESTRE
	printf("%s\n", "Informe a Nota do 2º Bimestre:");
	scanf("%f", &Notas[1]);
	// 3º BIMESTRE
	//printf("%s\n", "Informe a Nota do 3º Bimestre:");
	//scanf("%f", &Notas[2]);
	// 4º BIMESTRE
	//printf("%s\n", "Informe a Nota do 4º Bimestre:");
	//scanf("%f", &Notas[3]);

	// CALCULO DE MEDIA:
	// (1ºBI + 2º BI + 3ºBI + 4ºBI) / 4
	//Total = (Notas[0] + Notas[1] + Notas[2] + Notas[3]) / 4;
	// EXIBE O RESULTADO
	//printf("%s", "Resultado:\n");
	//printf("%f", Total);

	// CALCULO DE PESO POR BIMESTRE:
	// 1º BIMESTRE: PESO 4
	Peso[0] = 4;
	Total[0] = ((Notas[0] * Peso[0]) / 10);
	// 2º BIMESTRE: PESO 6
	Peso[1] = 6;
	Total[1] = ((Notas[1] * Peso[1]) / 10);

	// EXIBE RESULTADOS
	printf("%s", "RESULTADO:\n");
	for(X=0;X<2;X++) {
		printf("%f \n", Total[X]);
	}

	system("pause");
	return 0;
}
//---------------------------------------------------------------------------
