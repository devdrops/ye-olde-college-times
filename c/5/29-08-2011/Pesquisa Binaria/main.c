#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[8];
    int achou, busca;
    s[0] = 12;s[1] = 25;s[2] = 33;s[3] = 37;
    s[4] = 48;s[5] = 57;s[6] = 86;s[7] = 92;

    system("CLS");

    printf("Digite o numero a ser buscado: ");
    scanf("%d",&busca);

    achou=binaria(s,8,busca);

    if(achou!=-1) {
        printf("Numero encontrado na posicao: %d\n", achou);
        system("PAUSE"); }
    else {
        printf("Numero nao encontrado!\n");
        system("PAUSE"); }
    return 0;
}

/************** FUNÇÃO binaria ***************/

int binaria(int *item, int count, int chave)
{
    int esq, dir, meio;
    esq=0;
    dir=count-1;

    while(esq<=dir)
    {
        meio=(esq+dir)/2;
        if(chave<item[meio])
            dir=meio-1;
        else if(chave>item[meio])
            esq=meio+1;
        else
            return meio; /*achou*/
    }

    return -1;/*nao achou*/
}
