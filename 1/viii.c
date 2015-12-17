/*
*f can be called only from this file
*/
#include <stdio.h>
#include "v_head.h"
static void f();
int main()
{
	printf("%d\n", i);
	i++;
	f();
	return 0;
}
static void f()
{
	printf("in f\n");
}
