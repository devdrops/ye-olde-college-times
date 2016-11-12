import java.util.*;

public class consumidor {

	//	DECLARANDO OS ATRIBUTOS
	public String nome;
 	public String endereco;
	public String UC;

	// DECLARANDO OS METODOS
	public void dadoscli(){
		Scanner leia = new Scanner(System.in);

		// ESTE METODO PEDE OS DADOS DO CLIENTE
		System.out.print("Digite o nome do cliente..........: "); nome = leia.nextLine();
		System.out.print("Digite o endereco do cliente......: "); endereco = leia.nextLine();
		System.out.print("Digite o codigo da UC do cliente..: "); UC = leia.nextLine();
		
	}

		// ESTE METODO MOSTRA OS DADOS DO CLIENTE
	public void imprimir(){
		System.out.print("\n\nCliente.........................: " + nome.toUpperCase());
		System.out.print("\nEndereco........................: " + endereco.toUpperCase());
		System.out.print("\nCodigo da UC....................: " + UC.toUpperCase());
		
	}


}


