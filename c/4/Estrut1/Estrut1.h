#ifndef ESTRUT1_H_INCLUDED
#define ESTRUT1_H_INCLUDED

struct sData {
    int dia;
    int mes;
    int ano;
};

struct sEndereco {
    char endereco[41];
    char complemento[26];
    int  nro;
    char bairro[36];
    char cidade[26];
    char estado[3];
};

#endif // ESTRUT1_H_INCLUDED
