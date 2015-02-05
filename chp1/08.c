#include <stdio.h>

/* count white chars */

int main()
{
	int c, nw;
	
	for (nw = 0; (c = getchar()) != EOF; nw += c == '\t' || c == '\n' || c == ' ');
	
	printf("%d white chars", nw);
		
	return 0;
}
