//use gcc -fno-stack-protector stack_smash.c
#include <stdio.h>
void f();
int main()
{
	f();
	return 0;
}
void f()
{
	char s[5];
	gets(s);
}
