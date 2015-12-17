#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* i=(int*) malloc(sizeof(int));
	*i=4;
	printf("%d\n", *i);
//	free(i);
	return 0;
}
