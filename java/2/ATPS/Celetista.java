import java.util.*;

public class Celetista {

	// Atributos
	String nome;
	String endereco;
	String telefone;
	String rg;
	String cpf;
	float salarioBruto;
	
	
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
		// CALCULA O SALARIO MENSAL DA PESSOA CELETISTA
		int hora = 0;
		int chave = 0;
		float valorhora, resultado = salarioBruto;
		
        //VALIDAÇÃO DA QTDE DE HORAS TRABALHADAS
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
		
		if (hora >= 160){
			valorhora = salarioBruto/160;
			resultado = (hora * valorhora);							
		}
		return resultado;		
	}
	

	public float IR (float salarioBruto){
		// CALCULO DO IR DE CELETISTA
		float imposto = 0;
				
		if (salarioBruto >= 1499.16 && salarioBruto <= 2246.75) {
			imposto = (float) ((salarioBruto * 0.075) - 112.43);			
		} else if (salarioBruto >= 2246.76 && salarioBruto <= 2995.70) {
			imposto = (float) ((salarioBruto * 0.15) - 280.94);
		} else if (salarioBruto >= 2995.71 && salarioBruto <= 3743.19) {
			imposto = (float) ((salarioBruto * 0.225) - 505.62);
		} else if (salarioBruto >= 3743.20) {
			imposto = (float) ((salarioBruto * 0.275) - 692.78);
		}
		
		return imposto;
	}

	
	public float INSS (float salarioBruto) {
		// CALCULO DE INSS DO CELETISTA
		float contrib = (float) (salarioBruto * 0.08);
		
		// VALOR DA CONTRIBUIÇÃO INSS
		if (salarioBruto >= 965.78 && salarioBruto <= 1609.45) {
			contrib = (float) (salarioBruto * 0.09);
		} else if (salarioBruto >= 1609.46) {
			contrib = (float) (salarioBruto * 0.11);
		}
		
		// LIMITE DE CONTRIBUIÇÃO INSS
		if (contrib > 354.08) {
			contrib = (float) 354.08;
		}
		
		return contrib;
	}
	
}

