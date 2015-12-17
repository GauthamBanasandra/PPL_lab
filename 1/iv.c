/*
iv.c:2:1: error: multiple storage classes in declaration specifiers extern static int i; ^

That is what we get on attempting to extern a static variable. Declaring extern static int i; - is analogous to the declaration float int i; You can't have float and int appear in the same declaration right? Similarly, you can't have extern and static in the same declaration.
*/
#include <stdio.h>
extern static int i;
int main()
{
	printf("%d\n", i);
}
