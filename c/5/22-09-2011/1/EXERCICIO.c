/* EXERCICIO FEITO EM 22/09/2011
   CLASSIFICAÇÃO E PESQUISA
   CIÊNCIA DA COMPUTAÇÃO - 4º SEMESTRE
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 80000

long int sequencial(int *item, int count, int chave){
    int t;
    long int num_testes = 0;

    for(t=0;t<count;t++){
        num_testes = num_testes + 1;
        if(chave==item[t]){
            return num_testes;
        }
    }
    return num_testes;
}

int geraint(){
    int num;
    num = rand()%10000;
    return(num);
}

int main(){
    int s[TAM];
    int i,busca;
    long int cont_testes;

    system("CLS");

    for(i=0;i<TAM;i++){
        s[i] = geraint();
    }

    printf("Digite o numero a ser buscado: ");
    scanf("%d",&busca);

    cont_testes = sequencial(s,TAM,busca);

    if(cont_testes<TAM)
        printf("Numero Encontrado! Foram feitos %u testes", cont_testes);
    else
        printf("Numero não Encontrado! Foram feitos %u testes", cont_testes);

    return 0;
}
