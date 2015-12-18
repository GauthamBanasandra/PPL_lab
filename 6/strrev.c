#include <stdio.h>
char q[10];
void strrev(char *p, int n)
{
	if(n>0)
	{
		q[n-1]=*p;
		strrev(p+1, n-1);
	}
}
int main()
{
	char s[]="abcd";
	strrev(s, 4);
	printf("%s\n", q);
	return 0;
}
