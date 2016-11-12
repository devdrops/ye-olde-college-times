import java.io.*;

class Exemplo03
{
	public static void main(String[] arg)
	{
		File diretorio = new File("MeuDirEx03");
		diretorio.mkdir();

		try
		{
			FileOutputStream f0 = new FileOutputStream(diretorio + "/MeuTexto.txt");
			
			System.out.println("Digite o seu Texto (ENTER para sair): ");
			
			byte a = ' ';
			
			while(a!='\n')
			{
				a=(byte)System.in.read();
				f0.write(a);
			}

			f0.close();
		}		
		catch(IOException e)
		{
			System.out.println("ERRO: Ao gravar no arquivo !");
			System.exit(0);
		}
	}
}
