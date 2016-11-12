/* DATA SIMPLES */

class DataSimples
{
	public int dia;
	public int mes;
	public int ano;

	public void ExibeData()
	{ System.out.println("Data: " + dia + "/" + mes + "/" + ano); }

	public boolean DataEValida(int MeuDia, int MeuMes, int MeuAno)
	{
		if(MeuDia<1 && MeuDia>31) { return false; }
		if(MeuMes<1 && MeuMes>12) { return false; }
		if(MeuDia==31
	}
}

