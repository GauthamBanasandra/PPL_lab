import java.util.ArrayList;

/**
 * Created by gauth_000 on 18-Dec-15.
 */
public class SynchronizedThread extends Thread
{
    public static int count;

    @Override
    public void run()
    {
        increment();
    }

    public synchronized static void increment()
    {
        for (int i = 0; i < 5; ++i)
            System.out.println("id=" + currentThread().getId() + "\tname=" + currentThread().getName() + "\tcount=" + count++);
    }

    public static void main(String[] args)
    {
        ArrayList<SynchronizedThread> threadsList = new ArrayList<SynchronizedThread>();

        for (int i = 0; i < 5; ++i)
            threadsList.add(new SynchronizedThread());

        for (int i = 0; i < threadsList.size(); ++i)
            threadsList.get(i).start();
    }
}
