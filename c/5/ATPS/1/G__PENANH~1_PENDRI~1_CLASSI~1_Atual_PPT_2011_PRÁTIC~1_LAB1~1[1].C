/*Programa Pesquisa Sequencial para um vetor genérico*/
/*Prof. Johnny Cardoso Marques                */
#include <stdio.h>
#include <stdlib.h>
#define TAM 8
#define NUM_BUSCADO 45
void sequencial(int *item, int count, int chave)
{
	int t;
	int achou=0;
	long int num_testes=0;
	for(t=0;(t<count&&achou==0);++t){
            num_testes=num_testes+1;
            if(chave==item[t])
                achou=1;
        }
    if (achou==1)
        printf("Numero encontrado! Foram feitos %u testes.",num_testes);
    else
        printf("Numero nao encontrado! Foram feitos %u testes.",num_testes);
}
int geraint()
{
    int num;
    num=rand()%10000;
    return (num);
}
int main()
{
	int s[TAM];
	int i,busca;
    system("CLS");
    for (i=0;i<TAM;i++) {
        s[i]=geraint();
    }
    busca=NUM_BUSCADO;
    sequencial(s,TAM,busca);
	return 0;
}
