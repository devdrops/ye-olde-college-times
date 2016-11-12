class DemoImpressao
{
    boolean main(String[] args)
    {
        System.out.println("7+2="+(7+2));
        System.out.println("7-2="+(7-2));
        System.out.println("7*2="+(7*2));
        System.out.println("7/2="+(7/2));
        return true;
    }
} // fim da classe

/* ERROS ACUSADOS
1) Declaração inválida de metodo, não há declaração do tipo de dado a retornar em 'main(String[] args)'
2) Ausência de parênteses declarado sem uso em 'System.out.println("7+2="+7+2));'. Corrigido para 'System.out.println("7+2="+(7+2));'
3) Ausência de parênteses declarado sem uso em 'System.out.println("7-2="+7-2));' Corrigido para 'System.out.println("7-2="+((7-2));'
4) Ausência de parênteses declarado sem uso em 'System.out.println("7*2="+7*2));' Corrigido para 'System.out.println("7*2="+(7*2));'
5) Ausência de parênteses declarado sem uso em 'System.out.println("7/2="+7/2));' Corrigido para 'System.out.println("7/2="+(7/2));'
*/
