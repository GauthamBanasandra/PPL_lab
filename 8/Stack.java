import java.util.ArrayList;

/**
 * Created by gauth_000 on 18-Dec-15.
 */
public class Stack<T>
{
    private ArrayList<T> stack;

    public Stack()
    {
        stack=new ArrayList<T>();
    }

    public void push(T t)
    {
        stack.add(t);
    }

    public T pop()
    {
        if (stack.size()>0)
        {
            T t=stack.get(stack.size()-1);
            stack.remove(t);
            return t;
        }
        else
        {
            System.out.println("stack underflow");
            return null;
        }
    }

    public void display()
    {
        for (T t:stack)
            System.out.println(t);
    }

    public static void main(String[] args)
    {
        Stack<Integer> stack=new Stack<Integer>();

        stack.push(2);
        stack.push(21);
        stack.push(26);
        stack.push(264);
        stack.display();
        stack.pop();
        stack.display();
    }
}
