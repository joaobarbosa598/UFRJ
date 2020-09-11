import java.util.ArrayList;
import java.util.TreeMap;

public class LivroDeOfertas<E>	 {
	  // Declaração de enum
    public static enum Direcao {
        COMPRA, VENDA
    }
    
    private TreeMap<Double, ArrayList<OrdemLimitada> > compra = new TreeMap<Double, ArrayList<OrdemLimitada>>();
    private TreeMap<Double, ArrayList<OrdemLimitada> > venda = new TreeMap<Double, ArrayList<OrdemLimitada>>();
    
    private double maiorPrecoCompra = 0, menorPrecoVenda = 0;
    private double precoAntigoCompra = 0, precoAntigoVenda = 0;
    
    private int quantidadeDeCompra, quantidadeDeVenda, aux, i;
    
    public LivroDeOfertas( double tick ) {
    	
    }

    public void registra( OrdemLimitada ordemLimitada ) {
    	if(ordemLimitada.getDirecao() == Direcao.COMPRA)
    	{   
    		if(maiorPrecoCompra == 0)
    			maiorPrecoCompra = ordemLimitada.getPreco();
    		else if(maiorPrecoCompra < ordemLimitada.getPreco() || !this.compra.containsKey(maiorPrecoCompra))
    			maiorPrecoCompra = ordemLimitada.getPreco();
    		if(!this.venda.containsKey(menorPrecoVenda) && menorPrecoVenda!=0)
    			menorPrecoVenda = this.venda.firstKey();

    		//System.out.println(menorPrecoVenda+" - "+ordemLimitada.getPreco()+" - "+this.venda.containsKey(menorPrecoVenda));
            if(ordemLimitada.getPreco() > menorPrecoVenda && menorPrecoVenda!=0 && this.venda.containsKey(menorPrecoVenda)==true)
            {
            	precoAntigoCompra = ordemLimitada.getPreco();
            	ordemLimitada.setMelhorPreco(menorPrecoVenda);	
            }
            
    		//System.out.println(maiorPrecoCompra+" "+compra.containsKey(maiorPrecoCompra)+" "+ordemLimitada.getPreco());
    		if(!compra.containsKey(ordemLimitada.getPreco()))
    		{
    			if(maiorPrecoCompra < ordemLimitada.getPreco())
    				maiorPrecoCompra = ordemLimitada.getPreco();
    			ArrayList<OrdemLimitada> u = new ArrayList<OrdemLimitada>();
    			u.add(ordemLimitada);
    			compra.put(ordemLimitada.getPreco(), u);
    		}
    		else
    		{
    			compra.get( ordemLimitada.getPreco() ).add(ordemLimitada);
    		}
    		
    		//nesse momento, eu verifico se ha disponibilidade para a efetuacao da transacao
    		compraProduto(ordemLimitada);
    		//System.out.println("compra "+ordemLimitada.getQuantidade());
    		
    		//A volta ao preco antigo
    		if(precoAntigoCompra != ordemLimitada.getPreco() && precoAntigoCompra!=0 && compra.containsKey(ordemLimitada.getPreco()))
    		{
    			compra.get(ordemLimitada.getPreco()).remove(ordemLimitada);
    			ordemLimitada.setMelhorPreco(precoAntigoCompra);
    			if( !compra.containsKey(ordemLimitada.getPreco()) )
        		{
        			ArrayList<OrdemLimitada> u = new ArrayList<OrdemLimitada>();
        			u.add(ordemLimitada);
        			compra.put(ordemLimitada.getPreco(), u);
        		}
        		else
        		{
        			compra.get(ordemLimitada.getPreco()).add(ordemLimitada);
        		}
    		}
    		
    	}
    	else if(ordemLimitada.getDirecao() == Direcao.VENDA)
    	{
    		if(menorPrecoVenda == 0)
    			menorPrecoVenda = ordemLimitada.getPreco();
    		else if(menorPrecoVenda > ordemLimitada.getPreco() || !this.venda.containsKey(menorPrecoVenda))
    			menorPrecoVenda = ordemLimitada.getPreco();
            
    		if(!this.compra.containsKey(maiorPrecoCompra) && maiorPrecoCompra!=0)
    			maiorPrecoCompra = this.compra.firstKey();
    		
            if(ordemLimitada.getPreco() < maiorPrecoCompra && menorPrecoVenda!=0 && this.compra.containsKey(maiorPrecoCompra))
            {
            	precoAntigoVenda = ordemLimitada.getPreco();
            	ordemLimitada.setMelhorPreco(maiorPrecoCompra);
            }
    		
    		if( !venda.containsKey(ordemLimitada.getPreco()) )
    		{
    			ArrayList<OrdemLimitada> u = new ArrayList<OrdemLimitada>();
    			u.add(ordemLimitada);
    			venda.put(ordemLimitada.getPreco(), u);
    		}
    		else
    		{
    			venda.get(ordemLimitada.getPreco()).add(ordemLimitada);
    		}
    		//nesse momento, eu verifico se ha disponibilidade para a efetuacao da transacao    	
			vendaProduto(ordemLimitada);
			//System.out.println("venda");
			
			//A volta ao preco antigo
    		if(precoAntigoVenda != ordemLimitada.getPreco() && precoAntigoVenda!=0 && venda.containsKey(ordemLimitada.getPreco()))
    		{
    			//System.out.println(precoAntigoCompra+" - "+ordemLimitada.getPreco());
    			venda.get(ordemLimitada.getPreco()).remove(ordemLimitada);
    			ordemLimitada.setMelhorPreco(precoAntigoVenda);
    			if( !venda.containsKey(ordemLimitada.getPreco()) )
        		{
        			ArrayList<OrdemLimitada> u = new ArrayList<OrdemLimitada>();
        			u.add(ordemLimitada);
        			venda.put(ordemLimitada.getPreco(), u);
        		}
        		else
        		{
        			venda.get(ordemLimitada.getPreco()).add(ordemLimitada);
        		}
    		}
    		
    	}
    }
    
    private void compraProduto( OrdemLimitada ordemLimitada )
    {
        quantidadeDeCompra = 0; 
        aux = 0;
        i = 0;

    	if( this.venda.containsKey( ordemLimitada.getPreco() ))
    	{
			quantidadeDeCompra = ordemLimitada.getQuantidade();
    		for(i = 0; i < venda.get( ordemLimitada.getPreco() ).size() && quantidadeDeCompra>0; i++)
    		{
    			//garantindo que a "quantidadeDeCompra" nao fique com valor negativo
    			if(quantidadeDeCompra < this.venda.get(ordemLimitada.getPreco()).get(0).getQuantidade() && quantidadeDeCompra>0)
    			{
    				this.venda.get(ordemLimitada.getPreco()).get(0).setQuantidade(this.venda.get(ordemLimitada.getPreco()).get(0).getQuantidade()-quantidadeDeCompra);
    				quantidadeDeCompra = 0;
    				//como o ordemLimitada do tipo compra foi adicionado por ultimo na lista compra, deve-se retirar ele dessa lista
	    			//devo remover esse ordemlimitada, pois ele nao possui mais quantidade e foi o ultimo a ser adicionado
    				this.compra.get(ordemLimitada.getPreco()).remove( ordemLimitada );
	    			break;
    			}
    			else if(quantidadeDeCompra == venda.get(ordemLimitada.getPreco()).get(0).getQuantidade() && quantidadeDeCompra>0)
    			{
	    			quantidadeDeCompra = 0;
	    			this.venda.get(ordemLimitada.getPreco()).remove(0);
	    			this.compra.get( ordemLimitada.getPreco() ).remove( ordemLimitada );
	    			break;
    			}
    			else if(quantidadeDeCompra>0)
    			{
    				aux = quantidadeDeCompra - venda.get(ordemLimitada.getPreco()).get(0).getQuantidade();
    				this.venda.get(ordemLimitada.getPreco()).remove(0);
    				this.compra.get( ordemLimitada.getPreco() ).get(0).setQuantidade(aux);
    				ordemLimitada.setQuantidade(aux);
    				quantidadeDeCompra = aux;
    				/*No caso de 2 vendas( uma de 100 e outra de 200) e uma compra de 400
    				 * nesse caso, quando eu removo o primeiro elemento (o de 100) o segundo elemento toma o lugar dele
    				 * no entanto, o i continua avancando(vai para 1) e o segundo elemento que se tornou o primeiro 
    				 * e ignorado. Por isso uso o i--
    				i--;*/
    			}
    		}

			if(this.venda.get(ordemLimitada.getPreco()).size()==0)
			{
				this.venda.remove(ordemLimitada.getPreco());
			}
			if(this.compra.get(ordemLimitada.getPreco()).size()==0)
			{
				this.compra.remove(ordemLimitada.getPreco());
			}
    	}
    }
    
    
    private void vendaProduto( OrdemLimitada ordemLimitada )
    {
        quantidadeDeVenda = 0; 
        aux = 0;
        i = 0;
        
    	if( this.compra.containsKey( ordemLimitada.getPreco() ) )
    	{
    		quantidadeDeVenda = ordemLimitada.getQuantidade();
    		for(i = 0; i < compra.get( ordemLimitada.getPreco() ).size() && quantidadeDeVenda>0 ; i++)
    		{
    			//garantindo que a "quantidadeDeCompra" nao fique com valor negativo
    			if(quantidadeDeVenda < this.compra.get(ordemLimitada.getPreco()).get(0).getQuantidade() && quantidadeDeVenda>0)
    			{
    				this.compra.get(ordemLimitada.getPreco()).get(0).setQuantidade(this.compra.get(ordemLimitada.getPreco()).get(0).getQuantidade()-quantidadeDeCompra);
    				quantidadeDeVenda = 0;
    				//como o ordemLimitada do tipo venda foi adicionado por ultimo na lista venda, deve-se retirar ele dessa lista
	    			//devo remover esse ordemlimitada, pois ele nao possui mais quantidade
    				this.venda.get(ordemLimitada.getPreco()).remove( ordemLimitada );
	    			break;
    			}
    			else if(quantidadeDeVenda == compra.get(ordemLimitada.getPreco()).get(0).getQuantidade() && quantidadeDeVenda>0)
    			{
    				quantidadeDeVenda = 0;
	    			this.compra.get(ordemLimitada.getPreco()).remove(0);
	    			this.venda.get( ordemLimitada.getPreco() ).remove( ordemLimitada );
	    			break;
    			}
    			else if(quantidadeDeVenda>0)
    			{
    				aux = quantidadeDeVenda - this.compra.get(ordemLimitada.getPreco()).get(0).getQuantidade();
    				this.compra.get(ordemLimitada.getPreco()).remove(0);
    				this.venda.get( ordemLimitada.getPreco() ).get(0).setQuantidade(aux);
    				ordemLimitada.setQuantidade(aux);
    				quantidadeDeVenda = aux;
    				/*No caso de 2 vendas( uma de 100 e outra de 200) e uma compra de 400
    				 * nesse caso, quando eu removo o primeiro elemento (o de 100) o segundo elemento toma o lugar dele
    				 * no entanto, o i continua avancando(vai para 1) e o segundo elemento que se tornou o primeiro 
    				 * e ignorado. Por isso uso o i--
    				i--;*/
    			}
    		}

			if(this.venda.get(ordemLimitada.getPreco()).size()==0)
			{
				this.venda.remove(ordemLimitada.getPreco());
			}
			if(this.compra.get(ordemLimitada.getPreco()).size()==0)
			{
				this.compra.remove(ordemLimitada.getPreco());
			}
    	}
    }
    

    public double getPrecoCompra() {
        return maiorPrecoCompra;
    }

    public double getPrecoVenda() {
        return menorPrecoVenda;
    }

    public double getQuantidadeCompra( double d ) {
    	double total = 0;
    	
    	if(compra.containsKey(d))
    	{
	    	for(int x = 0; x < compra.get(d).size(); x++ )
	    		total+=compra.get(d).get(x).getQuantidade();
    	}
    	
		return total;
    }

	public double getQuantidadeVenda( double d ) {
		double total = 0;
    	if(venda.containsKey(d))
    	{
	    	for(int x = 0; x < venda.get(d).size(); x++ )
	    		total+=venda.get(d).get(x).getQuantidade();
    	}
    	
		return total;
    }

}