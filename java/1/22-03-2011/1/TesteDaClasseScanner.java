import java.util.*;

class TesteDaClasseScanner
{
    public static void main(String[] Variavel)
    {
        Scanner LerTeclado  = new Scanner(System.in);

        System.out.print("Digite o Nome: "); String meuNome = LerTeclado.nextLine();
        System.out.print("Digite o Dia : "); int    meuDia  = LerTeclado.nextInt();
        System.out.print("Digite o Mês : "); int    meuMes  = LerTeclado.nextInt();

        System.out.println("\nTaubate, " + meuDia + "/" + meuMes + ". Olá " + meuNome + ", seja bem vindo à aula!");    
    }
}
