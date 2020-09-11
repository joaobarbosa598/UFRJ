import java.util.Scanner;
import java.util.TreeMap;

public class Medidas 
{
	private TreeMap<Integer, Pessoa> clientes = new TreeMap<Integer, Pessoa>();
	private Pessoa cliente;
	
	public Medidas(int acao)
	{
		do
		{
			if(acao == 1)
				registra();
			else if(acao == 2)
				corrige();
			else if(acao == 3)
			{
				int code;
				Scanner cod = new Scanner(System.in);
				code = cod.nextInt();

				cod.reset();
				deleta(code);
			}
			else if(acao == 4)
				lista();
			
			Scanner myObj = new Scanner(System.in);
			acao = myObj.nextInt();

			myObj.reset();
		}
		while(acao != 0);
	}
	
	private void registra()
	{
		int local=0;
		Scanner strings = new Scanner(System.in);
		Scanner ints = new Scanner(System.in);
		
		String nome = strings.nextLine();
		
		long cpf = ints.nextInt();
		String endereco = strings.nextLine();
		int plano = ints.nextInt();

		strings.reset();
		ints.reset();
		
		cliente = new Pessoa(nome , cpf, endereco, plano);
		System.out.println ( clientes.size() );
		clientes.put( clientes.size()+local , cliente);
		System.out.println ( clientes.toString() );
		local = clientes.size();
		
	}
	
	private void corrige()
	{
		
	}
	
	private void deleta(int code)
	{
		clientes.remove(code);
	}
	
	private void lista()
	{
		System.out.println ( clientes.toString() );
	}
}
