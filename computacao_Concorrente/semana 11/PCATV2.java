/* Disciplina: Computacao Concorrente */
/* Prof.: Silvana Rossetto */
/* Laboratório: 11 */
/* Codigo: Produtor/consumidor em Java */
/* -------------------------------------------------------------------*/

// Monitor
class Buffer {
  static final int N = 10;    //tamanho do buffer
  private int[] buffer = new int[N];  //reserva espaco para o buffer 
  private int count=0, in=0, out=0;   //variaveis compartilhadas
  
  // Construtor
  Buffer() { 
    for (int i=0;i<N;i++)  buffer[i] = -1; 
  } // inicia o buffer

  public void imprimeBuffer()
  {
    for(int i = 0; i < N; i++)
      System.out.print(buffer[i]+ " ");
    
    System.out.println();
  }

  // Insere um item
  public synchronized void Insere (int item) {
    try 
    { 
      if(count < N)
      {
        this.buffer[in] = item;
        in = (in+1)%N;
        count++;
        System.out.println("O item " + item + " foi inserido com sucesso");
        imprimeBuffer();
      }
    } catch (Exception e) { }
  }
  
  // Remove um item
  public synchronized int[] Remove () 
  {
    int[] aux = new int[N];
    //iniciando vetor auxiliar
    for(int i = 0; i < N; i++) aux[i] = -1;

    try 
    {
      if(count == 10)
      {
          for(int i = 0; count != 0; i ++)
          {
            aux[i] = this.buffer[out];
            this.buffer[out] = -1;
            out = (out+1)%N;
            count--;
            System.out.println("O item: " + aux[i] + " foi removido");
            imprimeBuffer();
          }
      }
      return aux;
    } catch (Exception e) { return new int[10]; }
  }
}

//--------------------------------------------------------
// Consumidor
class Consumidor extends Thread {
  int id;
  int delay;
  Buffer buffer;

  // Construtor
  Consumidor (int id, int delayTime, Buffer b) {
    this.id = id;
    this.delay = delayTime;
    this.buffer = b;
  }

  // Método executado pela thread
  public void run () {
    int[] item;
    try {
      for (;;) {
        item = this.buffer.Remove();
        sleep(this.delay); //...simula o tempo para fazer algo com o item retirado
      }
    } catch (InterruptedException e) { return; }
  }
}

//--------------------------------------------------------
// Produtor
class Produtor extends Thread {
  int id;
  int delay;
  Buffer buffer;

  // Construtor
  Produtor (int id, int delayTime, Buffer b) {
    this.id = id;
    this.delay = delayTime;
    this.buffer = b;
  }

  // Método executado pelo thread
  public void run () {
    try {
      for (;;) {
        this.buffer.Insere(this.id); //simplificacao: insere o proprio ID
        sleep(this.delay);
      }
    } catch (InterruptedException e) { return; }
  }
}

//--------------------------------------------------------
// Classe principal
class PCATV2 {
  static final int P = 5;
  static final int C = 5;

  public static void main (String[] args) {
    int i;
    Buffer buffer = new Buffer();      // Monitor
    Consumidor[] cons = new Consumidor[C];   // Consumidores
    Produtor[] prod = new Produtor[P];       // Produtores

    for (i=0; i<C; i++) {
       cons[i] = new Consumidor(i+1, 1000, buffer);
       cons[i].start(); 
    }
    for (i=0; i<P; i++) {
       prod[i] = new Produtor(i+1, 1000, buffer);
       prod[i].start(); 
    }
  }
}
