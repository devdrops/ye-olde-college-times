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

	// ATRIBUI��O DE VALOR AO VETOR
	strcpy(Nome, "Teste Hoje");
	// APRESENTA��O
	printf("%s\n", "Usuario:");
	// IMPRESS�O DO VETOR
	printf("%s\n", Nome);

	// PEDE PARA INFORMAR AS NOTAS
	// 1� BIMESTRE
	printf("%s\n", "Informe a Nota do 1� Bimestre:");
	scanf("%f", &Notas[0]);
	// 2� BIMESTRE
	printf("%s\n", "Informe a Nota do 2� Bimestre:");
	scanf("%f", &Notas[1]);
	// 3� BIMESTRE
	//printf("%s\n", "Informe a Nota do 3� Bimestre:");
	//scanf("%f", &Notas[2]);
	// 4� BIMESTRE
	//printf("%s\n", "Informe a Nota do 4� Bimestre:");
	//scanf("%f", &Notas[3]);

	// CALCULO DE MEDIA:
	// (1�BI + 2� BI + 3�BI + 4�BI) / 4
	//Total = (Notas[0] + Notas[1] + Notas[2] + Notas[3]) / 4;
	// EXIBE O RESULTADO
	//printf("%s", "Resultado:\n");
	//printf("%f", Total);

	// CALCULO DE PESO POR BIMESTRE:
	// 1� BIMESTRE: PESO 4
	Peso[0] = 4;
	Total[0] = ((Notas[0] * Peso[0]) / 10);
	// 2� BIMESTRE: PESO 6
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
