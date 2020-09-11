class Vetor
{
	static final int TAM = 5;
	int[] vetor = new int[TAM];
	int i, aux;

	public Vetor(int tipo)
	{
		for(i = 0, aux = tipo%2; i < TAM; i++, aux+=2)
		{
			vetor[i] = aux;
		}
	}

	public void showVet()
	{
		for(i = 0; i < TAM; i++)
			System.out.println(vetor[i]+ " ");
	}

	public synchronized int get(int indice) { 
	      return this.vetor[indice]; 
	 }
}

class T extends Thread {
   //identificador da thread
   int id;
   //objeto compartilhado com outras threads
   Vetor vet1, vet2, resultado;

   //construtor
   public T(int tid, Vetor vet1, Vetor vet2, Vetor resultado) { 
      this.id = tid; 
      this.vet1 = vet1;
      this.vet2 = vet2;
      this.resultado = resultado;
   }

   //metodo main da thread
   public void run() {
      System.out.println("Thread " + this.id + " iniciou!");
      for(int i = id; i < 5; i+=2)
      {
      	this.resultado.vetor[i] = this.vet1.get(i) + this.vet2.get(i);
      } 
      System.out.println("Thread " + this.id + " terminou!"); 
   }
}

class Desafio
{
	static final int N = 2;

	public static void main (String[] args)
	{
		//reserva espaço para um vetor de threads
      	Thread[] threads = new Thread[N];

		Vetor vetor1 = new Vetor(1);
		vetor1.showVet();
		Vetor vetor2 = new Vetor(2);
		vetor2.showVet();
		Vetor resultado = new Vetor(2);

		//cria as threads da aplicacao
		for (int i=0; i<threads.length; i++) {
		 threads[i] = new T(i, vetor1, vetor2, resultado);
		}

		//inicia as threads
		for (int i=0; i<threads.length; i++) {
		 threads[i].start();
		}

		//espera pelo termino de todas as threads
		for (int i=0; i<threads.length; i++) {
		 try { threads[i].join(); } catch (InterruptedException e) { return; }
		}
		System.out.println("Valor de vet1 = "); 
		resultado.showVet();
	}
}