public class UCons{

	// INICIANDO A DECLARAÇÃO DOS ATRIBUTOS DA CLASSE
	public int VlCons = 0;
	public double VlTarifa = 0.34;
	

	// INICIANDO A DECLARAÇÃO DOS METODOS
	// ESTE METODO ATUALIZARA O VALOR DOS ATRIBUTOS DA CLASSE
	public void Atualiza(int VlCons){
		this.VlCons = VlCons;
	}

	// ESTE METODO FARA OS CALCULOS E EXIBIRA NA TELA O VALOR CONSUMIDO
	public void Imprimir(int VlAtual){
	
		
		System.out.println("\nA leitura anterior e de.........: "+ VlCons); 
		System.out.println("A leitura atual e de............: "+ VlAtual );
		
	// FAZENDO O CALCULO PARA O VALOR CONSUMIDO E VALOR A PAGAR 
		if (VlAtual < VlCons)
		{
			VlAtual = VlAtual + 10000;
		}
		
		System.out.println("Kw/h consumido..................: "+(VlAtual=(VlAtual-VlCons)));
		System.out.println("O valor pago por kw e de........: R$"+VlTarifa);
		String msg = String.format("%.2f", VlAtual * VlTarifa); // LIMITANDO NUMERO DE CASAS DECIMAIS DEPOIS DA VIRGULA
		System.out.println("O Valor da Fatura e de..........: R$"+(msg)); 
	}


}
