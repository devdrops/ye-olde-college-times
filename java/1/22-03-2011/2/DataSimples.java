class DataSimples
{

	public int Dia;
	public int Mes;
	public int Ano;

	public void ExibirData()
	{ System.out.println("Data: " + Dia + "/" + Mes + "/" + Ano);}

	public boolean DataEValida(int MeuDia, int MeuMes, int MeuAno)
	{
		if(MeuDia<1 || MeuDia>31) { return false; }
		if(MeuMes<1 || MeuMes>12) { return false; }
		if(MeuDia==31)
		{
			if(MeuMes !=  1 || MeuMes !=  3 ||
			   MeuMes !=  5 || MeuMes !=  7 ||
			   MeuMes !=  8 || MeuMes != 10 ||
			   MeuMes != 12)
			{ return false; }
		}
		if(MeuDia==29 && MeuMes==2)
		{
			if(MeuAno%4 != 0) { return false; }
		}
		return true;
	}
	
	public boolean ModificaData(int MeuDia, int MeuMes, int MeuAno)
	{
		if(DataEValida(MeuDia,MeuMes,MeuAno))
		{
			Dia = MeuDia;
			Mes = MeuMes;
			Ano = MeuAno;
			return true;
		} else {
			return false;
		}
	}
		
}
