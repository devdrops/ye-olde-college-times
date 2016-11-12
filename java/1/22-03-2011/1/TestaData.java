import java.util.*;

class TestaData
{
	public static void main(String[] args)
	{
		DataSimples MinhaData = new DataSimples();		
		MinhaData.ExibirData();

        Scanner LerTeclado = new Scanner(System.in);
        System.out.print("Digite o Dia: ");
        int meuDia = LerTeclado.nextInt();
        System.out.print("Digite o Mes: ");
        int meuMes = LerTeclado.nextInt();
        System.out.print("Digite o Ano: ");
        int meuAno = LerTeclado.nextInt();
		
		if (!MinhaData.ModificaData(meuDia,meuMes,meuAno))
		{
			System.out.println("Data Invalida, Mentecápito!");
		} else {
			MinhaData.ExibirData();
		}
	}
}
