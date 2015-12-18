/**
 * Created by gauth_000 on 17-Dec-15.
 */
interface Interface_A
{
    public int add_int(int... numbers);
}
interface Interface_B
{
    public double add_double(double... numbers);
}
interface Interface_C
{
    public String concat(String... strings);
}

class A implements Interface_A
{
    @Override
    public int add_int(int... numbers)
    {
        int sum=0;
        for (int n:numbers)
            sum+=n;
        return sum;
    }
}

class B extends A implements Interface_B
{
    @Override
    public double add_double(double... numbers)
    {
        double sum=0;
        for (double n:numbers)
            sum+=n;
        return sum;
    }
}

class C extends B implements Interface_C
{

    @Override
    public String concat(String... strings)
    {
        String sum="";
        for (String n:strings)
            sum+=n;
        return sum;
    }
}

//This is similar to the declaration MultipleInheritance extends A, B, C
public class MultipleInheritance extends C
{
    public static void main(String[] args)
    {
        MultipleInheritance mi=new MultipleInheritance();

        System.out.println(mi.add_int(1, 2, 3, 4));
        System.out.println(mi.add_double(1.1, .22, 3.2, 4.5));
        System.out.println(mi.concat("this ","is ", "multiple ", "inheritance"));
    }
}
