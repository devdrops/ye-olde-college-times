import java.io.*;

class Exemplo01
{
	public static void main(String[] arg)
	{
		File diretorio = new File("MeuDirEx01");
		diretorio.mkdir();
		
		File subdir1 = new File(diretorio,"MeuSubDiretorio01");
		subdir1.mkdir();

		File subdir2 = new File(diretorio,"MeuSubDiretorio02");
		subdir2.mkdir();

		File arquivo = new File(diretorio,"MeuArquivoVazio.txt");
		try
		{
			FileWriter f = new FileWriter(arquivo);
			f.close();
		}
		catch(IOException e)		
		{
			System.out.println("Nao consegui abrir o arquivo"+diretorio+"/MeuArquivoVazio.txt para leitura!");
		}
	
		String[] arquivos = diretorio.list();
		for (int i = 0;i<arquivos.length; i++) 
		{
			File filho = new File(diretorio,arquivos[i]);
			System.out.println(filho.getAbsolutePath());
		}		
	}
}
