import java.io.*;
class Exemplo05 {
	public static void main(String[] arg) {
		File diretorio = new File("MeuDirEx05");
		diretorio.mkdir();
		try {
			int i=0; String result; boolean continua=true; String linha;
			InputStreamReader conversor = new InputStreamReader(System.in);
			BufferedReader bf = new BufferedReader(conversor);
			File fileName = new File(diretorio + "/MeuTexto.txt");
			RandomAccessFile obj = new RandomAccessFile(fileName,"rw");
			System.out.println("Digite o seu Texto ('fim' para Sair):  ");
			while(continua) {
				linha = bf.readLine();
				if (linha.equals("fim")) { continua=false;	       }
				else 			 { obj.writeBytes(linha+"\n"); }			
			}
			obj.close();
			bf.close();
			System.out.println("\n------------\nExibindo o arquivo digitado acima: ");
			RandomAccessFile PonteiroLeitura = new RandomAccessFile(fileName,"r");
			while(i<PonteiroLeitura.length()) {
				result = PonteiroLeitura.readLine();
				if (result==null) { break; }
				System.out.println(result);	
				i++;
			}
			PonteiroLeitura.close();
		}
		catch(IOException e) {
			System.out.println("ERRO: Ao gravar no arquivo !"); System.exit(0);
		}
	}
}
