import java.util.*;

public class consumidor {

	public String nome;
 	public String endereco;
	public String UC;

	
	public void dadoscli(){
		Scanner leia = new Scanner(System.in);

		System.out.print("Digite o nome do cliente..........: "); nome = leia.nextLine();
		System.out.print("Digite o endereco do cliente......: "); endereco = leia.nextLine();
		System.out.print("Digite o codigo da UC do cliente..: "); UC = leia.nextLine();
		
	}

	public void imprimir(){
		System.out.print("\n\nCliente.........................: " + nome);
		System.out.print("\nEndereco........................: " + endereco);
		System.out.print("\nCodigo da UC....................: " + UC);
		
	}


}


