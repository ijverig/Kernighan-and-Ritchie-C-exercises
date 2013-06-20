#include <stdio.h>

/* count white chars */

int main ()
{
	int c, nw;
	
	for (nw = 0; (c = getchar()) != EOF; nw += c == '\t' || c == '\n' || c == ' ' ? 1 : 0);
	
	printf("%d white chars", nw);
		
	return 0;
}
