public final class Compare
{
	public static <T> void compare(T a, T b)
	{
		if(a>b)
			System.out.println(a+">"+b);
		else
			System.out.println(a+"<"+b);
	}
	
	public static void main(String[] args)
	{
		compare(4, 5);
	}
}
