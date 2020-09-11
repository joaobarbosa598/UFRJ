import java.util.Scanner;

class LE
{
    //qtde de leitores e escritores lendo/escrevendo
    private int leit, escr;

    public LE() {  } 

    //construtor// Entrada para leitores
    public synchronized void EntraLeitor () 
    {  
        try
        {
            while(escr > 0)
            {
                wait();
            }
            leit++;
            notify();
        } catch (Exception e) { }
    }

    // Saida para leitores
    public synchronized void SaiLeitor () 
    { 
        try
        {
            leit--;
            if(leit==0)
            {
                notify();
            }
        } catch (Exception e) { }
    }

    // Entrada para escritores
    public synchronized void EntraEscritor () 
    {
        try
        {
            while( (leit > 0) || (escr >0) )
            {
                wait();
            }
            escr++;
        } catch (Exception e) { }
    }

    // Saida para escritores
    public synchronized void SaiEscritor ()
    { 
        try
        {
            escr--;
            notifyAll();
        } catch (Exception e ) { }
    }
    
}

class Leitor extends Thread
{
    Buffer buffer;
    LE leitorescritor = new LE();
    public Leitor(Buffer b)
    {
        this.buffer = b;
    }

    public void run()
    {
        try
        {
            for(;;)
            {
                leitorescritor.EntraLeitor();
                this.buffer.get();
                leitorescritor.SaiLeitor();
            }
        } catch (Exception e) { }
    }
}

class Escritor extends Thread
{
    Scanner sc = new Scanner(System.in);
    Buffer buffer;
    LE leitorescritor = new LE();
    public Escritor()
    {
        buffer = new Buffer( "Escritor pronto para executar" );
    }

    public void run()
    {
        try
        {
            for(;;)
            {
                leitorescritor.EntraEscritor();
                buffer.set( sc.nextLine() );
                leitorescritor.SaiEscritor();
            }
        } catch (Exception e) { }
    }
}

class Buffer
{
    String buffer = new String();
    public Buffer(String mensagem)
    {
        this.buffer = mensagem;
    }
    
    public String get()
    {
        return this.buffer;
    }

    public void set(String mensagem)
    {
        this.buffer = mensagem;
    }

}
class LEATV3
{
    static final int L = 2;
    static final int E = 2;

    public static void main (String[] args)
    {
        Buffer buffer = new Buffer("Hello");
        Leitor[] leitor = new Leitor[L];
        Escritor[] escritor = new Escritor[E];
        int i;

        for(i = 0; i < L; i++)
        {
            leitor[i] = new Leitor(buffer);
            leitor[i].start();
        }

        for(i = 0; i < E; i++)
        {
            escritor[i] = new Escritor();
            escritor[i].start();
        }
    }
}