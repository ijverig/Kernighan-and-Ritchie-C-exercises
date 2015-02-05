#include <stdio.h>
#include "outside.h"

/* extern variables - globals */

void f();

int main()
{
	printf("%d\n", i);
	f();
	printf("%d\n", i);

	return 0;
}

void f()
{
	i = 7;
}
