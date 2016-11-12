
public class consumidor {

	//	DECLARANDO OS ATRIBUTOS
	public String nome;
 	public String endereco;
	public String UC;

	// DECLARANDO OS METODOS
	// ESTE METODO ATUALIZA OS DADOS DO CLIENTE
		public void AtualizaCli(String nome, String endereco, String UC){
			this.nome = nome;
			this.endereco = endereco;
			this.UC = UC;
		}
		
	// ESTE METODO MOSTRA OS DADOS DO CLIENTE
	public void imprimir(){
		System.out.print("\n\nCliente.........................: " + nome.toUpperCase());
		System.out.print("\nEndereco........................: " + endereco.toUpperCase());
		System.out.print("\nCodigo da UC....................: " + UC.toUpperCase());
		
	}


}


