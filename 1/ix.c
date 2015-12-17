/*yes, it is possible to return. But since the life of the static variable is confined to the function, it will be a dangling pointer.
*/
#include <stdio.h>

int* f();
int main()
{
	int *i=f();
	printf("%d\n", *i);
	return 0;
}
int* f()
{
	static int* i;
	printf("in f\n");
	return i;
}
