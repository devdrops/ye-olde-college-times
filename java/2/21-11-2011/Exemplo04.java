import java.io.*;
class Exemplo04 {
	public static void main(String[] arg) {
		File diretorio = new File("MeuDirEx04");
		diretorio.mkdir();		
		try {
			boolean continua=true; String linha;
			InputStreamReader conversor = new InputStreamReader(System.in);
			BufferedReader bf = new BufferedReader(conversor);
			FileWriter f = new FileWriter(diretorio + "/MeuTexto.txt");
			PrintWriter out = new PrintWriter(f);
			System.out.println("Digite o seu texto (Digite 'fim' para Sair): ");
			while(continua) {
				linha = bf.readLine();
				if (linha.equals("fim")) {continua=false; } else {out.println(linha);}
			}
			bf.close();
			out.close();
		}
		catch(IOException e){
			System.out.println("ERRO: Ao gravar no arquivo !");
			System.exit(0);
		}
	}
}
