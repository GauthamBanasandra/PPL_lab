#include <stdio.h>
int main()
{
	struct a
	{
		int x;
		float y;
		int a[2];
	};
	struct a b={2, 4.1};
	struct a c;
	//compare the 2 struct by comparing the attributes for equality.
	typedef int myint;
	int i1=0;
	myint i2=0;
	printf("%d %d\n", i1, i2);
	b.a[0]=1;
	b.a[1]=2;
	c=b;
	printf("b %d %f array %d %d\n", b.x, b.y, b.a[0], b.a[1]);
	printf("c %d %f array %d %d\n", c.x, c.y, c.a[0], c.a[1]);
	return 0;
}
