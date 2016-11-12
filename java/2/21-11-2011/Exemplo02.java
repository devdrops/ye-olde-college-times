import java.io.*;

class Exemplo02
{
	public static void main(String[] arg)
	{
		File diretorio = new File("MeuDirEx02");
		diretorio.mkdir();

		File arquivo = new File(diretorio,"lixo.txt");

		try
		{
			FileOutputStream out = new FileOutputStream(arquivo);
			
			out.write( new byte[]{'l','i','x','o','\n'});
			
			File subdir = new File(diretorio,"subdir");
			subdir.mkdir();			
			
			String[] arquivos = diretorio.list();
			for (int i=0;i<arquivos.length;i++)
			{
				File filho = new File(diretorio,arquivos[i]);
				System.out.println(filho.getAbsolutePath());
			}
			
			out.close();
		}
		catch(IOException e)
		{
			System.out.println("ERRO: Ao gravar no arquivo lixo.txt!");
			System.exit(0);
		}
	}
}
