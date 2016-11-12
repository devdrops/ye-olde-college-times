import.java.util.*

public class Celetista {

	// Atributos
	String nome;
	String endereco;
	String telefone;
	String rg;
	String cpf;
	Float salarioBruto;
	
	
	// Construtor
	Celetista(String nome, String endereco, String telefone, String rg, String cpf, float salarioBruto){
		this.nome = nome;
		this.endereco = endereco;
		this.telefone = telefone;
		this.rg = rg;
		this.cpf = cpf;
		this.salarioBruto = salarioBruto;
			
	}
	
	// Declaração do Scanner
	Scanner lerteclado = new Scanner(System.in);
	
	
	
	// Métodos
	public float salarioMensal(float salarioBruto){
		
		int hora = 0;
		float valorhora;
		
		
		System.out.println("Digite a qtd de horas trabalhadas: ");
		hora = lerteclado.nextInt;
		
		if (hora <= 160){
			return salarioBruto;			
		}
		else if (hora >= 160){
			valorhora = salarioBruto/160;
			
			return (hora * valorhora);	
			
		}		
	}
	

	public float IR (float salario){
		
		
		
		
	}
	
}
