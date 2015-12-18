#include <stdio.h>
#include <stdarg.h>
void add(int, ...);
int main()
{
	add(4, 1, 2, 3, 5);
	add(5, 4, 1, 2, 3, 5);
	return 0;
}

void add(int n, ...)
{
	va_list list;
	int sum=0, i=0;
	va_start(list, n);
	for(i=0; i<n; ++i)
		sum+=va_arg(list, int);
	printf("sum=%d\n", sum);
}
