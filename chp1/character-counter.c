#include <stdio.h>

/* char's types counter  */

int main()
{
	int c, dc[10] = {0}, bc, oc;

	bc = oc = 0;

	while ((c = getchar()) != EOF)
		if (c == '\t' || c == ' ' || c == '\n')
			++bc;
		else if (c >= '0' && c <= '9')
			++dc[c - '0'];
		else
			++oc;
	
	printf("%d - blank\n", bc);
	printf("%d - other\n", oc);
	for (int i = 0;i<10;++i)
		printf("%d - %d\n", dc[i], i);

	return 0;
}

