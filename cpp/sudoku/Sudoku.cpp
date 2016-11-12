#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void initiate();
void generatesolvedsudoku();
void concealcells();
int checkuniqueness();
void removecandidates(int);
void undo();
void screenoutputSU();
void screenoutputSO();
int nakedsingle();

int unsolvedcells[81];
int cellptr;
int solution[81];
int sudoku[81];
int cellscandidates[81];
int countcandidates[512];
int cellsboxnumber[81];
int boxcellnumbers[9][9];
int lastcandidate[81];
int logsteps;
int logcell[81];
int logrow[81];
int logcolumn[81];
int logbox[81];


int main(void){
    // TITULO DO PROJETO
    printf("Gerador de Sudoku\n\n");
    // RANDOMIZER - ALEATÓRIO
    srand((unsigned)time(NULL));
    // INICIA ARRAY E A BASE
    initiate();
    // GERA A SOLUÇÃO
    generatesolvedsudoku();
    // CONCILIAMENTO COM CÉLULAS
    concealcells();
    // COLOCA O SUDOKU PARA RESOLVER
    screenoutputSU();
    // AGUARDA USUÁRIO
    printf("Aguardando...\n\n");
    getch();
    // EXIBE A SOLUÇÃO
    screenoutputSO();
    printf("Pressione qualquer tecla...\n");
    getch();
}

void initiate(void){
    int i;
    int j;
    int k;
    int l;
    int cell;
    int box;

    for(i=0;i<512;i++){
        j=i;
        countcandidates[i]=0;
        while (j>0){
            if (j%2>0) countcandidates[i]++;
            j=(j-(j%2))/2;
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                for(l=0;l<3;l++){
                    cell=(j*27)+(i*3)+(l*9)+k;
                    box=(j*3)+i;
                    cellsboxnumber[cell]=box;
                    boxcellnumbers[box][(l*3)+k]=cell;
                }
            }
        }
    }
}

void generatesolvedsudoku(void){
    int i;
    int j;
    int k;
    int l;
    int currentcell;

    // PREPARA DADOS PARA NOVA GRADE
    for(i=0;i<81;i++){
        unsolvedcells[i]=i;
        cellscandidates[i]=511;
        solution[i]=0;
        lastcandidate[i]=0;
    }

    // MISTURA A ORDEM DAS CÉLULAS
    for(i=0;i<500;i++){
        j=(rand()%81);
        k=(rand()%81);
        l=unsolvedcells[j];
        unsolvedcells[j]=unsolvedcells[k];
        unsolvedcells[k]=l;
    }

    cellptr=80;
    logsteps=-1;

    while (cellptr>-1){
        currentcell=unsolvedcells[cellptr];
        if (solution[currentcell]==0){
            for(i=0;i<cellptr;i++){
                if (countcandidates[cellscandidates[unsolvedcells[i]]]<countcandidates[cellscandidates[unsolvedcells[cellptr]]]){
                    j=unsolvedcells[i];
                    unsolvedcells[i]=unsolvedcells[cellptr];
                    unsolvedcells[cellptr]=j;
                }
            }
            currentcell=unsolvedcells[cellptr];
            j=1;
            for(i=0;i<9;i++){
                if ((cellscandidates[currentcell]&j)>0){
                    solution[currentcell]=i+1;
                    break;
                }
                j=j*2;
            }

            if (countcandidates[cellscandidates[currentcell]]==1) lastcandidate[currentcell]=1;
            removecandidates(currentcell);
            j=cellptr;
            cellptr--;

            if (cellptr>-1){
                for(i=0;i<j;i++){
                    if (cellscandidates[unsolvedcells[i]]==0){
                        cellptr++;
                        break;
                    }
                }
            }
        } else {
            if (lastcandidate[currentcell]==1){
                undo();
                lastcandidate[currentcell]=0;
                cellptr++;
            } else {
                j=1;
                k=solution[currentcell];
                undo();
                for(i=0;i<k;i++) j=j*2;
                for(i=k;i<9;i++){
                    if ((cellscandidates[currentcell]&j)>0){
                        solution[currentcell]=i+1;
                        break;
                    }
                    j=j*2;
                }
                lastcandidate[currentcell]=1;

                if (solution[currentcell]<9){
                    for(i=solution[currentcell];i<9;i++){
                        j=j*2;
                        if ((cellscandidates[currentcell]&j)>0){
                            lastcandidate[currentcell]=0;
                            break;
                        }
                    }
                }
                removecandidates(currentcell);
                j=cellptr;
                cellptr--;

                if (cellptr>-1){
                    for(i=0;i<j;i++){
                        if (cellscandidates[unsolvedcells[i]]==0){
                            cellptr++;
                            break;
                        }
                    }
                }
            }
        }
    }
}


void removecandidates(int currentcell){
    int i;
    int j;
    int k;
    int l;
    int row;
    int column;
    int box;

    logsteps++;

    logcell[logsteps]=currentcell;
    logrow[logsteps]=0;
    logcolumn[logsteps]=0;
    logbox[logsteps]=0;

    row=currentcell/9;
    column=currentcell%9;
    box=cellsboxnumber[currentcell];

    j=1;
    if (solution[currentcell]>1)
        {
        for(i=1;i<solution[currentcell];i++) j=j*2;
        }
            for(i=0;i<cellptr;i++)
            {
                if ((cellscandidates[unsolvedcells[i]]&j)>0)
                {
                    if (unsolvedcells[i]/9==row)
                    {
                        l=1;
                        for(k=0;k<9;k++)
                        {
                            if ((row*9)+k==unsolvedcells[i])
                            {
                                logrow[logsteps]=logrow[logsteps]|l;
                                cellscandidates[unsolvedcells[i]]=cellscandidates[unsolvedcells[i]]&(511^j);
                                break;
                            }
                            l=l*2;
                        }
                    }
                    else if (unsolvedcells[i]%9==column)
                    {
                        l=1;
                        for(k=0;k<9;k++)
                        {
                            if ((k*9)+column==unsolvedcells[i])
                            {
                                logcolumn[logsteps]=logcolumn[logsteps]|l;
                                cellscandidates[unsolvedcells[i]]=cellscandidates[unsolvedcells[i]]&(511^j);
                                break;
                            }
                            l=l*2;
                        }
                    }
                    else if (cellsboxnumber[unsolvedcells[i]]==box)
                    {
                        l=1;
                        for(k=0;k<9;k++)
                        {
                            if (boxcellnumbers[box][k]==unsolvedcells[i])
                            {
                                logbox[logsteps]=logbox[logsteps]|l;
                                cellscandidates[unsolvedcells[i]]=cellscandidates[unsolvedcells[i]]&(511^j);
                                break;
                            }
                            l=l*2;
                        }
                    }
                }
            }
}


void undo(void) {
    int i;
    int j;
    int k;
    int l;
    int row;
    int column;
    int box;

    // A FUNÇÃO USA A INFORMAÇÃO ARMAZENADA EM removecandidates[] PARA REPOSIÇÃO DE DADOS
    k=solution[logcell[logsteps]];
    solution[logcell[logsteps]]=0;

    row=logcell[logsteps]/9;
    column=logcell[logsteps]%9;
    box=cellsboxnumber[logcell[logsteps]];

    j=1;
    if (k>1) {
        for(i=1;i<k;i++) j=j*2;
    }
    l=1;
    for(i=0;i<9;i++) {
        if ((logrow[logsteps]&l)>0) cellscandidates[(row*9)+i]=cellscandidates[(row*9)+i]|j;        
        if ((logcolumn[logsteps]&l)>0) cellscandidates[(i*9)+column]=cellscandidates[(i*9)+column]|j;    
        if ((logbox[logsteps]&l)>0) cellscandidates[boxcellnumbers[box][i]]=cellscandidates[boxcellnumbers[box][i]]|j;
        l=l*2;
    }

    logsteps--;
    
}

void concealcells(void) {
    int i;
    int j;
    int k;
    int l;
    int solutionbackup[81];
    int countconcealedcells;
    int currentcell;
    int mixedorder[41];
    // FUNÇÃO PARA REMOVER VALORES DA LISTA DE CÉLULUAS ALEATÓRIAS PARA CHECAR PELAS ÚNICAS CÉLULAS 
    // DIFERENTES.

    for(i=0;i<81;i++) {
        solutionbackup[i]=solution[i];    
        sudoku[i]=solution[i];    
        if (i<41) mixedorder[i]=i;
    }

    for(i=0;i<250;i++) {
        j=(rand()%41);
        k=(rand()%41);
        l=mixedorder[j];
        mixedorder[j]=mixedorder[k];
        mixedorder[k]=l;
    }

    countconcealedcells=0;

    for(i=0;i<41;i++) {
        if (countconcealedcells==58) break;    
        currentcell=mixedorder[i];    
        sudoku[currentcell]=0;    
        sudoku[80-currentcell]=0;    
        if (checkuniqueness()==1) {
            countconcealedcells++;
            countconcealedcells++;
        } else {
            sudoku[currentcell]=solutionbackup[currentcell];
            sudoku[80-currentcell]=solutionbackup[80-currentcell];
        }
    }

    for(i=0;i<81;i++) solution[i]=solutionbackup[i];
}

int checkuniqueness(void) {
    int i;
    int j;
    int k;
    int solvedcells;
    int row;
    int column;
    int box;
    int currentcell;
    int countsolutions;
    int boundary;
    // ROTINA DE SOLUÇÃO DIRETA DO SUDOKU ELABORADO

    for(i=0;i<81;i++) {
        solution[i]=sudoku[i];
        cellscandidates[i]=511;
        lastcandidate[i]=0;
    }

    solvedcells=0;

    for(i=0;i<81;i++) {
        if (solution[i]>0) {
            solvedcells++;
            cellscandidates[i]=0;
            row=i/9;
            column=i%9;
            box=cellsboxnumber[i];
            j=1;
            if (solution[i]>1) {
                for (k=1;k<solution[i];k++) j=j*2;
            }
            for (k=0;k<9;k++) {
                cellscandidates[(row*9)+k]=cellscandidates[(row*9)+k]&(511^j);
                cellscandidates[(k*9)+column]=cellscandidates[(k*9)+column]&(511^j);
                cellscandidates[boxcellnumbers[box][k]]=cellscandidates[boxcellnumbers[box][k]]&(511^j);
            }
        }
    }

    while (nakedsingle()==1) solvedcells++;

    if (solvedcells==81) {
        countsolutions=1;
        return (countsolutions);
    }

    cellptr=-1;
    for(i=0;i<81;i++) {
        if (solution[i]==0) {
            cellptr++;
            unsolvedcells[cellptr]=i;
        }
    }

    boundary=cellptr+1;
    logsteps=-1;
    countsolutions=0;

    while (cellptr<boundary) {
        if (cellptr==-1) {
            countsolutions++;
            if (countsolutions==2) break;
            cellptr++;
        }

        currentcell=unsolvedcells[cellptr];
        if (solution[unsolvedcells[cellptr]]==0) {
            for(i=0;i<cellptr;i++) {
                if (countcandidates[cellscandidates[unsolvedcells[i]]]<countcandidates[cellscandidates[unsolvedcells    [cellptr]]]) {
                    j=unsolvedcells[i];
                    unsolvedcells[i]=unsolvedcells[cellptr];
                    unsolvedcells[cellptr]=j;
                 }
             }
             currentcell=unsolvedcells[cellptr];
             j=1;
             for(i=0;i<9;i++) {
                if ((cellscandidates[currentcell]&j)>0) {
                    solution[currentcell]=i+1;
                    break;
                }
                j=j*2;
             }
             if (countcandidates[cellscandidates[currentcell]]==1) lastcandidate[currentcell]=1;
             removecandidates(currentcell);
             j=cellptr;
             cellptr--;
             if (cellptr>-1) {
                for(i=0;i<j;i++) {
                    if (cellscandidates[unsolvedcells[i]]==0) {
                        cellptr++;
                        break;
                    }
                }
             }
        } else {
            if (lastcandidate[currentcell]==1) {
                undo();
                lastcandidate[currentcell]=0;
                cellptr++;
            } else {
                j=1;
                k=solution[currentcell];
                undo();
                for(i=0;i<k;i++) j=j*2;
                for(i=k;i<9;i++) {
                    if ((cellscandidates[currentcell]&j)>0) {
                        solution[currentcell]=i+1;
                        break;
                    }
                    j=j*2;
                }
                lastcandidate[currentcell]=1;
                if (solution[currentcell]<9) {
                    for(i=solution[currentcell];i<9;i++) {
                        j=j*2;
                        if ((cellscandidates[currentcell]&j)>0) {
                            lastcandidate[currentcell]=0;
                            break;
                        }
                    }
                }
                removecandidates(currentcell);
                j=cellptr;
                cellptr--;
                if (cellptr>-1) {
                    for(i=0;i<j;i++) {
                        if (cellscandidates[unsolvedcells[i]]==0) {
                            cellptr++;
                            break;
                        }
                    }
                }
            }
        }
    }

    return (countsolutions);
    
}

int nakedsingle(void) {
    int i;
    int j;
    int k;
    int row;
    int column;
    int box;
    int foundnaked;

    foundnaked=0;
    for (i=0;i<81;i++) {
        if(countcandidates[cellscandidates[i]]==1) {
            foundnaked=1;
            row=i/9;
            column=i%9;
            box=cellsboxnumber[i];
            j=1;
            for (k=0;k<9;k++) {
                if ((cellscandidates[i]&j)>0) {
                    solution[i]=k+1;
                    break;
                }
                j=j*2;
            }
            cellscandidates[i]=0;
            for (k=0;k<9;k++) {
                cellscandidates[(row*9)+k]=cellscandidates[(row*9)+k]&(511^j);
                cellscandidates[(k*9)+column]=cellscandidates[(k*9)+column]&(511^j);
                cellscandidates[boxcellnumbers[box][k]]=cellscandidates[boxcellnumbers[box][k]]&(511^j);
            }
            break;
        }
    }
    
    return(foundnaked);

}

void screenoutputSU(void){
    // IMPRIME NA TELA OS SUDOKUS PARA MONTAR
    int i;
    int j;
    int k;
    int l;

    printf("Sudoku         \n");
    printf("-----------    \n");
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<3;k++) {
                for(l=0;l<3;l++) {
                    printf("%u",sudoku[(i*27)+(j*9)+(k*3)+l]);
                }
                printf(" ");
            }
            printf("   ");
            for(k=0;k<3;k++) {
                for(l=0;l<3;l++) {
                    // CONTAGEM OBRIGATÓRIA PARA IMPRESSÃO DO SUDOKU NA TELA
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n\n");
    
}

void screenoutputSO(void){
    // IMPRIME NA TELA A SOLUÇÃO DE CADA SUDOKU
    int i;
    int j;
    int k;
    int l;

    printf("Solucoes         \n");
    printf("-----------    \n");
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<3;k++) {
                for(l=0;l<3;l++) {
                    // CONTAGEM OBRIGATÓRIA PARA IMPRESSÃO DA SOLUÇÃO DO SUDOKU NA TELA
                }
            }            
            for(k=0;k<3;k++) {
                for(l=0;l<3;l++) {
                    printf("%u",solution[(i*27)+(j*9)+(k*3)+l]);
                }
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n\n");
    
}
