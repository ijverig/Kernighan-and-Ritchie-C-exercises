#include <stdio.h>

/* incorrect evaluation (parenthesis omitted) */

int main()
{
	int c;
	
	while (c = getchar() != EOF)
		putchar(c);
	
	return 0;
}
