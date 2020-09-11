public class OrdemLimitada 
{
	private int cliente, numCorretora, i;
	private double d;
	private LivroDeOfertas.Direcao tipo;
	
	public OrdemLimitada( int cliente, int numCorretora, 
	           LivroDeOfertas.Direcao compra, int i, double d ) 
	{
		this.cliente = cliente;
		this.numCorretora = numCorretora;
		this.tipo = compra;
		this.i = i;
		this.d = d;
	}
	
	public double getPreco()
	{
		return d;
	}
	
	public LivroDeOfertas.Direcao getDirecao()
	{
		return tipo;
	}
	public int getQuantidade()
	{
		return i;
	}
	
	public void setQuantidade(int i)
	{
		this.i = i;
	}
	
	public void setMelhorPreco(double d)
	{
		this.d = d;
	}
	
	public String toString()
	{
		String a;
		a = this.cliente+" "+this.numCorretora+" "+this.tipo+" "+this.i+" "+this.d;
		return a;
	}
}