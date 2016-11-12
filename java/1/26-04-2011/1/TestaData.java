/*     TESTADATA     */

class TestaData
{
	public static void main(String[] args)
	{
		DataSimples MinhaData = new DataSimples();
		MinhaData.ExibeData();
		if (!MinhaData.ModificaData(1,12,1980))
		{
			System.out.println("Data Invalida!");
		}
		else
		{
			MinhaData.ExibeData();
		}
	}
}
