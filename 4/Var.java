public final class Var
{
	public static void add(int... a)
	{
		int sum=0;
		for(int x:a)
			sum+=x;
		System.out.println("sum="+sum);
	}
	
	public static void main(String[] args)
	{
		add(1, 2, 3, 5);
	}
}
