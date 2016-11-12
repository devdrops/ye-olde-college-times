
struct sData {
    int dia;
    int mes;
    int ano;
};

struct sTelefone {
    char ddd[4];
    char nro[10];
};

struct sEndereco {
    char logra[41];
    char complemento[21];
    char nro[6];
    char bairro[26];
    char cidade[36];
    char cep[10];
    char uf[3];
};

struct sEmprego {
    struct sData dt_adm;
    char   nome[31];
    char   funcao[16];
    float  ult_salario;
    struct sData dt_demissao;
};

struct sCadastro {
    int  codigo;
    char nome[46];
    char sexo;
    struct sData dt_nascimento;
    char   rg[13];
    char   cpf[15];
    char   nacionalidade[16];
    char   naturalidade[31];
    char   est_civil ;
    struct sTelefone tel_residencial;
    struct sTelefone tel_celular;
    struct sTelefone tel_comercial;
    struct sEndereco end_residencial;
    struct sEndereco end_entrega;
    struct sEndereco end_cobranca;
    struct sEmprego  emprego1;
    struct sEmprego  emprego2;
    struct sEmprego  emprego3;
};
