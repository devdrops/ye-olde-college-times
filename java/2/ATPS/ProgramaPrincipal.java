import java.util.*;

class ProgramaPrincipal {

    public static void main(String [] args){
        // ATRIBUTOS
        int colaborador = 0;
        int escolha = -1;
        float resultado=0;
        int chave = 0;
        String nome;
        String endereco;
    	String telefone;
    	String rg = "";
    	String cpf= "";
    	String cnpj = "";
    	float salarioBruto = 0;
    	float valorHora = 0;

        // INSTANCIANDO SCANNER
        Scanner lerteclado = new Scanner(System.in);

        // VERIFICAÇÃO DO TIPO DE COLABORADOR
        do {
            // LIMPEZA DE TELA!!
          //  System("CLEAR");
            chave = 0;
            System.out.println("Informe o tipo de Colaborador: \n0 - Celetista\n1 - Pessoa Juridica");
            colaborador = lerteclado.nextInt();
            // VALIDAÇÃO DA ESCOLHA
            if(colaborador!=0 && colaborador!=1){
                System.out.println("Valor invalido! Escolha novamente");
                chave = -1;
            }
        } while (chave == -1);

        // Recebendo dados
        System.out.print(  "\nNome.........: ");
        lerteclado.nextLine();
        nome = lerteclado.nextLine();        
        System.out.print    ("Endereco.....: ");
        endereco = lerteclado.nextLine();
        System.out.print    ("Telefone.....: ");
        telefone = lerteclado.nextLine();

        // DIRECIONAMENTO
        if(colaborador == 0){
            // CELETISTA            
            System.out.print("RG...........: ");
            rg = lerteclado.nextLine();
            System.out.print("CPF..........: ");
            cpf = lerteclado.nextLine();
            System.out.print("Salario Bruto: ");
            salarioBruto = lerteclado.nextFloat();            
        } else {
            // PESSOA JURIDICA
            System.out.print("CNPJ.........: ");
            cnpj = lerteclado.nextLine();
            System.out.print("Valor Hora...: ");
            valorHora = lerteclado.nextFloat();        
        }

         do{
                // MENU DE OPÇÕES
                do {
                    // LIMPEZA DE TELA!!
                    // System("Clear");
                    chave = 0;

                    System.out.println("\nMenu ");
                    System.out.println("1 - Alterar Valor do Pagamento");
                    System.out.println("2 - Calcular Pagamento");
                    System.out.println("0 - Sair");
                    escolha = lerteclado.nextInt();
                    // VALIDAÇÃO DA ESCOLHA
                    if(colaborador!=0 && colaborador!=1 && colaborador!=2){
                        System.out.println("Valor invalido! Escolha novamente");
                        chave = -1;
                    }
                } while (chave == -1);

                // Opção 1
                if (escolha == 1){
                    // Celetista
                    if (colaborador == 0){
                            do {
		                        chave = -1;
                                System.out.print("\nDigite o novo salario bruto: ");
                                salarioBruto = lerteclado.nextFloat();
	                        	if (salarioBruto<=0) {
                                    chave = -1;
                                    System.out.print("Valor Invalido!\n");
	                        	} else  {
                                    // TRATAMENTO DE ERRO                
                                    chave = 0;
                               	}	    	
		                    } while (chave == -1);     
                    } 
                    // Pessoa Juridica
                    else {
                            do {
		                        chave = -1;
                                System.out.print("\nDigite o novo valor/hora: ");
                                valorHora = lerteclado.nextFloat();
	                        	if (valorHora<=0) {
                                    chave = -1;
                                    System.out.print("Valor Invalido!\n");
	                        	} else  {
                                    // TRATAMENTO DE ERRO                
                                    chave = 0;
                               	}	    	
		                    } while (chave == -1);                            
                    }                
                }

                // Opção 2
                else if (escolha == 2){
                    // Celetista
                    if (colaborador == 0){
                            Celetista contribuinte = new Celetista (nome, endereco, telefone, rg, cpf, salarioBruto);
                            resultado = contribuinte.salarioMensal(salarioBruto);                             
                    } 
                    // Pessoa Juridica
                    else {
                            PessoaJuridica contribuinte = new PessoaJuridica (nome, endereco, telefone, cnpj, valorHora);
                            resultado = contribuinte.salarioBruto(valorHora);
                    }
                    // Exibindo o pagamento
                    System.out.println("\nSeu pagamento e igual a: " + resultado);  
                }

                // Caso a escolha no menu seja inválida
                else if ((escolha != 0) && (escolha != 1) && (escolha != 2)) {
                    System.out.println("\nEscolha invalida!");
                }                

        } while ( escolha != 0);
    }
}
