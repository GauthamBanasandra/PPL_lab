#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
void f(jmp_buf);
int main()
{
	jmp_buf env;
	printf("msg 1\n");
	printf("msg 2\n");
	printf("msg 3\n");
	if(setjmp(env))
		exit(0);
	printf("msg 4\n");
	f(env);
	return 0;
}
void f(jmp_buf env)
{
	printf("inside f 1\n");
	longjmp(env, 1);
	printf("inside f 2\n");
	printf("inside f 3\n");
	printf("inside f 4\n");
	printf("inside f 5\n");
}
