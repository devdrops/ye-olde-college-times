class TestaData
{
	public static void main(String[] args)
	{
		DataSimples MinhaData = new DataSimples();		
		MinhaData.ExibirData();
		if (!MinhaData.ModificaData(15,03,1980))
		{
			System.out.println("Data Invalida!");
		} else {
			MinhaData.ExibirData();
		}
	}
}
