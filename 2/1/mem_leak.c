/**
	   The mtrace() function installs hook functions for the memory-
       allocation functions (malloc(3), realloc(3) memalign(3), free(3)).
       These hook functions record tracing information about memory
       allocation and deallocation.  The tracing information can be used to
       discover memory leaks and attempts to free nonallocated memory in a
       program.

       The muntrace() function disables the hook functions installed by
       mtrace(), so that tracing information is no longer recorded for the
       memory-allocation functions.  If no hook functions were successfully
       installed by mtrace(), muntrace() does nothing.

       When mtrace() is called, it checks the value of the environment
       variable MALLOC_TRACE, which should contain the pathname of a file in
       which the tracing information is to be recorded.  If the pathname is
       successfully opened, it is truncated to zero length.

       If MALLOC_TRACE is not set, or the pathname it specifies is invalid
       or not writable, then no hook functions are installed, and mtrace()
       has no effect.  In set-user-ID and set-group-ID programs,
       MALLOC_TRACE is ignored, and mtrace() has no effect.

	   For part (i), to compile the program:

		1. gcc -c filename
		2.MALLOC_TRACE=./a.txt ./a.out
		3.cat a.txt
		(output here has a hex number i.e address in square brackets. use this number in the next command)
		4.addr2line ./a.out address_from_above
		5.mtrace ./a.txt
		
		
		
		MY_TRIAL:
		aartij17@ubuntu:~/Desktop$ gcc mem_leak.c -g
		aartij17@ubuntu:~/Desktop$ MALLOC_TRACE=./a.txt ./a.out
		aartij17@ubuntu:~/Desktop$ mtrace ./a.out a.txt

			Memory not freed:
			-----------------
           				Address         Size     Caller
				0x0000000000c0f450      0x4  at /home/aartij17/Desktop/mem_leak.c:41
				0x0000000000c0f470      0x4  at /home/aartij17/Desktop/mem_leak.c:42


*/

#include <stdlib.h>
#include <mcheck.h>
int main(void)
{
	mtrace();
	int *a,*b;
	a = malloc(sizeof(int));
	int *q=calloc(sizeof(int),100);
	a=realloc(a,sizeof(int)*10);
	//free(a);
	//free(b);
	return 0;
	muntrace();
}
