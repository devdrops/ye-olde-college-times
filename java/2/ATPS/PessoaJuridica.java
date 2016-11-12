import java.util.*;

public class PessoaJuridica {

	// Atributos
	String nome;
	String endereco;
	String telefone;
	String cnpj;
	float valorHora;	
	
	// Construtor
	PessoaJuridica(String nome, String endereco, String telefone, String cnpj, float valorHora){
		this.nome = nome;
		this.endereco = endereco;
		this.telefone = telefone;
		this.cnpj = cnpj;
		this.valorHora = valorHora;			
	}
	
	// Declaração do Scanner
	Scanner lerteclado = new Scanner(System.in);	
	
	// Métodos
	public float salarioBruto(float valor){
		// CALCULA O SALARIO BRUTO DA PESSOA JURIDICA
		int hora, chave = 0;	

	    //VALIDAÇÃO
        do {
		    chave = -1;
            System.out.print("\nDigite a qtd de horas trabalhadas: ");
    		hora = lerteclado.nextInt();
	      	if (hora<=0) {
                chave = -1;
                System.out.print("Valor Invalido!\n");
	       	} else  {
                // TRATAMENTO DE ERRO                
                chave = 0;
            }	    	
		} while (chave == -1);

		return (hora * valor);		
	}
	

	public double Impostos (float salarioBruto){
		// CALCULO DO IRRF DA PESSOA JURIDICA
		double imposto = salarioBruto*0.015;
			
		if(salarioBruto > 5000)	{
			// CALCULO DO PIS/COFINS/CSLL
			imposto = imposto + (salarioBruto * 0.0465);

			// CALCULO DO ISS
			imposto = imposto + (salarioBruto * 0.04);
		}

		return imposto;
	}
	
}

