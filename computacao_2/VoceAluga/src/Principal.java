import java.util.Scanner;

public class Principal 
{
	public static void main (String []args)
	{
		int acao;
		
		Scanner myObj = new Scanner(System.in);
		acao = myObj.nextInt();

		myObj.reset();
		
		new Medidas( acao );
	}
}
