
public class Pessoa 
{
	private long cpf;
	private int plano;
	private String nome, endereco;
	
	public Pessoa( String nome, long cpf, String endereco, int plano )
	{
		this.nome = nome;
		this.cpf = cpf;
		this.endereco = endereco;
		this.plano = plano;
	}
	
	public String getNome()
	{
		return this.nome;
	}
	
	public long getCPF()
	{
		return this.cpf;
	}
	
	public String getEndereco()
	{
		return this.endereco;
	}
	
	public int getPlano()
	{
		return this.plano;
	}
	
	public void setNome(String nome)
	{
		this.nome = nome;
	}
	
	public void setCpf(int cpf)
	{
		this.cpf = cpf;
	}
	
	public void setEndereco(String endereco)
	{
		this.endereco = endereco;
	}
	
	public void setPlano(int plano)
	{
		this.plano = plano;
	}
	
	public String toString()
	{
		String a;
		a = this.nome.toUpperCase()+" cpf:"+this.cpf+" endereco:"+this.endereco+" plano:"+this.plano;
		return a;
	}
	
}
