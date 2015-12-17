/*
*compile this program as gcc iii.c -g && gdb a.out
*set the breakpoints as break <line_number>
*run the program by typing run
*examine the values by typeing print <var_name>
*/
#include <stdio.h>
#include <stdlib.h>
void function();
int global_i;
static int i;
static char c;
static float f;
static double d;
int main()
{
	char* str="foo";
	++i;
	++c;
	++f;
	++d;
	function();
	printf("%s\n", str);
	printf("%d\n", i);
	return 0;
}
void function()
{
	static int fi;
	static char fc;
	static float ff;
	static double fd;
	fi++;
	fc++;
	ff++;
	fd++;
}
