#include <stdio.h>
int fact(int x, int n)
{
	if(x>1)
		return fact(x-1, n*x);
	return n;
}

int main()
{
	printf("%d\n", fact(4, 1));
	return 0;
}
