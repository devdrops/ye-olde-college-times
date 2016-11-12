import java.util.*;

public class fatura {
	
	public static void main (String[] args){

    int x =0;	
	Scanner leia = new Scanner(System.in);
	consumidor cliente = new consumidor();
	UCons leitor = new UCons();

	cliente.dadoscli();
    	
	while(x >=0){
	System.out.print("\n\nDigite a medicao: ");
	x = leia.nextInt();
	if(x<0 || x>9999)
	break;
	cliente.imprimir();
	leitor.Imprimir(x);
	leitor.Atualiza(x);
	}
	                                       
	}

}









