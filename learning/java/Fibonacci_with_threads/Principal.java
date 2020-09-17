import java.util.ArrayList;

class Vetor
{
	static final int TAM = 20;
	ArrayList<Integer> vetor = new ArrayList<>();
	int i, aux;
	
	public Vetor()
	{	
		for(int i = 0; i < TAM; i++)
			vetor.add(0);
	}
	
	public void showVet()
	{
		for(i = 0; i < TAM; i++)
			System.out.print(vetor.get(i)+ " ");
	}
	
	public synchronized void set(int indice, int n)
	{
		this.vetor.set(indice, n);
	}

	public synchronized int get(int indice) { 
	      return this.vetor.get(indice); 
	 }
}

class T extends Thread
{
	int id;
	Vetor meuVetor;
	
	public T(int tid, Vetor v)
	{
		this.id = tid;
		this.meuVetor = v;
	}
	
	public void run()
	{
		System.out.println("Thread " + this.id + " iniciou!");
		for(int i = this.id; i < 20; i+=10)
		{
			meuVetor.set(i, Fibo.fibo(i+1));
		}
		System.out.println("Thread " + this.id + " encerrou!");
	}
}


class Fibo {

    static synchronized Integer fibo(int n) {
        int j = 1;
        int i = 1;
        int t;
        for(int k = 1; k < n; k++)
        {
        	t = i + j;
        	i = j;
        	j = t;
        }
        return i;
        
    }
    //chamada recursiva da funcao para calcular a sequencia (mais lento)
    /*static synchronized long fibo(int n) {
        if (n < 2) {
            return n;
        } else {
            return fibo(n - 1) + fibo(n - 2);
        }
    }*/
}


class Principal {
	
	public static void main (String[] args)
	{
		Thread[] threads = new Thread[10];
		Vetor meuVetor = new Vetor();
	
		for(int i = 0; i < threads.length; i++)
		{
			threads[i] = new T(i, meuVetor);
		}
		
		//.nanoTime	.currentTimeMillis
		long start = System.currentTimeMillis();
		for(int i = 0; i < threads.length; i++)
		{
			threads[i].start();
		}
		
		//espera pelo termino de todas as threads
		for (int i=0; i<threads.length; i++) 
		{
		 try { threads[i].join(); } catch (InterruptedException e) { return; }
		}
		long elapsedTime = System.currentTimeMillis() - start;
		System.out.println("Time " + elapsedTime);
		System.out.print("Valor de vet = "); 
		meuVetor.showVet();
	}
}

