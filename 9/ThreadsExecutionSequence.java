/**
 * Created by gauth_000 on 17-Dec-15.
 */
public class ThreadsExecutionSequence extends Thread
{
    @Override
    public void run()
    {
        System.out.println("id="+this.getId()+"\tname="+this.getName());
    }

    public static void main(String[] args)
    {
        ThreadsExecutionSequence t1=new ThreadsExecutionSequence();
        ThreadsExecutionSequence t2=new ThreadsExecutionSequence();
        ThreadsExecutionSequence t3=new ThreadsExecutionSequence();
        ThreadsExecutionSequence t4=new ThreadsExecutionSequence();

        t1.setName("Thread-1");
        t1.setName("Thread-2");
        t1.setName("Thread-3");
        t1.setName("Thread-4");

        System.out.println("execution sequence of the 4 threads.\nmain thread is always started first.");
        System.out.println("id=" + currentThread().getId() + "\tname=" + currentThread().getName());
        t1.start();
        t2.start();
        t3.start();
        t4.start();
    }
}
