class NumeroComplexo
{
    /**
    * Declaração dos campos desta classe
    */
    float real, imaginário;
    /**
    * Declaração dos metodos desta classe
    */
    float valor()
    {
        //return real, imaginário;
        return real;
        //return imaginário;
    }
} // fim da classe

/* ERROS ACUSADOS
1) Na linha 'return real, imaginário;' do metodo 'valor', esperado ';' ao inves de ','.
2) Na linha 'return real, imaginário;' do metodo 'valor', acusação de que não se trata de uma declaração.
3) Metodo 'valor' pode utilizar 'return' (retornar) somente um valor, não dois.
4) Má prática na declaração da variável 'imaginário': uso de acentuação.
*/
