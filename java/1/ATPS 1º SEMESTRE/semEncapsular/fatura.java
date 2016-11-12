

public class fatura {
	
	public static void main (String[] args){
	// DECLARANDO VARIVEL X PARA RECEBER A LEITURA DO RELOGIO DE ENERGIA
	int x =0;
	int primeiraLeitura;

	// ESTANCIANDO AS CLASSES
	
	consumidor cliente = new consumidor();
	UCons leitor = new UCons();

	//METODO QUE PEDE OS DADOS DO CLIENTE
	cliente.dadoscli();
    	
	// LAÇO PARA QUE O USUARIO DIGITE A MEDICAO ATUAL ATÉ O NUMERO SER MAIOR QUE 9999 OU MENOR QUE 0
		while(x >=0){
			primeiraLeitura = leitor.retorno();
			x = leitor.medicao();
			if(x<0)
			break;
	
	// IMPRIMINDO TODOS OS DADOS
			if(x<10000){
				cliente.imprimir();
				leitor.Imprimir(x, primeiraLeitura);
				//leitor.Atualiza(x);
			}
			else {
				System.out.println("Valor invalido CURUPIRA!!!");
			}
		}
	
	                                       
	}

}









