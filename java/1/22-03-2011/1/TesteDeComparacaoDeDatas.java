import java.util.*;

class TesteDeComparacaoDeDatas
{
    public int MeuDia1;
    public int MeuMes1;
    public int MeuAno1;
    public int MeuDia2;
    public int MeuMes2;
    public int MeuAno2;

    public static void main(String[] args)
    {
        DataSimples MinhaData = new DataSimples();
        MinhaData.ExibirData();

        Scanner LerTeclado = new Scanner(System.in);
        System.out.print("Digite a Primeira Data:\n");
        System.out.print("      Dia: ");
        int MeuDia1 = LerTeclado.nextInt();
        System.out.print("      Mês: ");
        int MeuMes1 = LerTeclado.nextInt();
        System.out.print("      Ano: ");
        int MeuAno1 = LerTeclado.nextInt();
        System.out.print("Digite a Segunda Data:\n");
        System.out.print("      Dia: ");
        int MeuDia2 = LerTeclado.nextInt();
        System.out.print("      Mês: ");
        int MeuMes2 = LerTeclado.nextInt();
        System.out.print("      Ano: ");
        int MeuAno2 = LerTeclado.nextInt();

        if(TesteDeComparacaoDeDatas(MeuDia1,MeuMes1,MeuAno1,MeuDia2,MeuMes2,MeuAno2))
        {
            System.out.println("Execução encerrada!");
        }
        
    }
}   
