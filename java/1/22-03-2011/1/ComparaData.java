import java.util.*;

class ComparaData
{

    public boolean ComparaData(int MeuDia1, int MeuMes1, int MeuAno1, int MeuDia2, int MeuMes2, int MeuAno2)
	{
        String Constante = "Datas identicas ^^ ";
	    
        if(MeuAno1 < MeuAno2)
        {
            Constante = "A Primeira Data (" + MeuDia1 + "/" + MeuMes1 + "/" + MeuAno1 + ") antecede a Segunda Data (" & MeuDia2 + "/" + MeuMes2 + "/" + MeuAno2 + ")";
        }
        if(MeuAno1 > MeuAno2)
        {
            Constante = "A Primeira Data (" + MeuDia1 + "/" + MeuMes1 + "/" + MeuAno1 + ") precede a Segunda Data (" & MeuDia2 + "/" + MeuMes2 + "/" + MeuAno2 + ")";
        }
        if(MeuAno1 == MeuAno2)
        {
            if(MeuMes1 < MeuMes2)
            {
                Constante = "A Primeira Data (" + MeuDia1 + "/" + MeuMes1 + "/" + MeuAno1 + ") antecede a Segunda Data (" & MeuDia2 + "/" + MeuMes2 + "/" + MeuAno2 + ")";
            }
            if(MeuMes1 > MeuMes2)
            {
                Constante = "A Primeira Data (" + MeuDia1 + "/" + MeuMes1 + "/" + MeuAno1 + ") precede a Segunda Data (" & MeuDia2 + "/" + MeuMes2 + "/" + MeuAno2 + ")";
            }
            if(MeuMes1 == MeuMes2)
            {
                if(MeuDia1 < MeuDia2)
                {
                    Constante = "A Primeira Data (" + MeuDia1 + "/" + MeuMes1 + "/" + MeuAno1 + ") antecede a Segunda Data (" & MeuDia2 + "/" + MeuMes2 + "/" + MeuAno2 + ")";
                }
                if(MeuDia1 > MeuDia2)
                {
                    Constante = "A Primeira Data (" + MeuDia1 + "/" + MeuMes1 + "/" + MeuAno1 + ") precede a Segunda Data (" & MeuDia2 + "/" + MeuMes2 + "/" + MeuAno2 + ")";
                }                
            }
        }        
        System.out.println(Constante);        
	}


}
