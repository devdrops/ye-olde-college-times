#include <stdio.h>
#include <stdlib.h>

struct sTemperaturas {
    float tMin;
    float tMed;
    float tMax;
};

int main()
{
    struct sTemperaturas vTemp[5][12];
    int regiao,mes,quad;
    char regioes[5][13]={"Sul"  , "Sudeste", "Centro-Oeste",
                         "Norte", "Nordeste"};
    char meses[12][10] ={"Janeiro", "Fevereiro", "Março",
                        "Abril"  , "Maio"     ,"Junho",
                        "Julho"  , "Agosto"   , "Setembro",
                        "Outubro", "Novembro" , "Dezembro"};

    float resultados[5][3][3];
    // 5 = regiões
    // 3 = quadrimestres
    // 3 = temperaturas

    for(regiao=0;regiao<5;regiao++)
    {
        for(mes=0;mes<12;mes++)
        {
            system("clear");
            printf("Região: %s\n",regioes[regiao]);

            printf("Mês: %s\n",meses[mes]);

            printf("-- Temp. Minima: ");
            scanf("%f", &vTemp[regiao][mes].tMin);
            printf("-- Temp. Máxima: ");
            scanf("%f", &vTemp[regiao][mes].tMax);
            vTemp[regiao][mes].tMed= (vTemp[regiao][mes].tMax +
                                      vTemp[regiao][mes].tMin) /2;
        }
    }

    // Gera o vetor com os dados resumidos
    system("clear");
    for(regiao=0;regiao<5;regiao++)
        for(quad=0;quad<3;quad++)
        {
            resultados[regiao][quad][0]=(vTemp[regiao][0].tMax +
                    vTemp[regiao][1].tMax +
                    vTemp[regiao][2].tMax +
                    vTemp[regiao][3].tMax) / 4;

            resultados[regiao][quad][1]=(vTemp[regiao][0].tMin +
                    vTemp[regiao][1].tMin +
                    vTemp[regiao][2].tMin +
                    vTemp[regiao][3].tMin) / 4;

            resultados[regiao][quad][2]=(vTemp[regiao][0].tMed +
                    vTemp[regiao][1].tMed +
                    vTemp[regiao][2].tMed +
                    vTemp[regiao][3].tMed) / 4;
        }

    // Exibe os dados na tela

    // Imprime o cabeçalho na tela
    printf("              | 1o Quadrimestre | 2o Quadrimestre | 3o Quadrimestre\n");
    printf("Região        | =============== | =============== | ===============\n");
    printf("              | Min | Máx | Méd | Min | Máx | Méd | Min | Máx | Méd\n");
    printf("===================================================================\n");

    for(regiao=0;regiao<5;regiao++)
    {
        printf("%-14s",regioes[regiao]);

        printf("| %3.0f | %3.0f | %3.0f ",resultados[regiao][0][1],
               resultados[regiao][0][0],resultados[regiao][0][2]);

        printf("| %3.0f | %3.0f | %3.0f ",resultados[regiao][1][1],
               resultados[regiao][1][0],resultados[regiao][1][2]);

        printf("| %3.0f | %3.0f | %3.0f\n",resultados[regiao][2][1],
               resultados[regiao][2][0],resultados[regiao][2][2]);
    }
    return 0;
}
