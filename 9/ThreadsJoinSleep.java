import java.util.Random;

/**
 * Created by gauth_000 on 17-Dec-15.
 */
public class ThreadsJoinSleep extends Thread
{
    @Override
    public void run()
    {
        Random random = new Random();
        System.out.print("id=" + this.getId() + "\tname=" + this.getName());
        int delay = random.nextInt(2000);
        System.out.println("\tdelay=" + delay);
        try
        {
            Thread.sleep(delay);
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }
    }

    public static void main(String[] args)
    {
        ThreadsJoinSleep t1 = new ThreadsJoinSleep();
        ThreadsJoinSleep t2 = new ThreadsJoinSleep();
        ThreadsJoinSleep t3 = new ThreadsJoinSleep();
        ThreadsJoinSleep t4 = new ThreadsJoinSleep();

        System.out.println("even though each thread is delayed for a variable period of time,\ncalling join() in this sequence would ensure that next thread is executed only after the completion of its previous thread.");
        try
        {
            t1.start();
            t1.join();
            t2.start();
            t2.join();
            t3.start();
            t3.join();
            t4.start();
            t4.join();
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }
    }
}
