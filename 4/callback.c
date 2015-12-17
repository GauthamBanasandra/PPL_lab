#include <stdlib.h>
#include <stdio.h>
struct closure
{
	void (*call)(struct closure*);
	int x;
};

void inner(struct closure* c)
{
	c->x=4;
	printf("inside inner x=%d\n", c->x);
}

struct closure* outer(int x)
{
	struct closure* closure=(struct closure*) malloc(sizeof(struct closure*));
	closure->x=x;
	printf("inside outer x=%d\n", closure->x);
	closure->call=&inner;
	return closure;
}

int main()
{
	struct closure* c=outer(2);
	c->call(c);
	return 0;
}
