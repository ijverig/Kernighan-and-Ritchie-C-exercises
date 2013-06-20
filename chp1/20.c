#include <stdio.h>

/* detab */

#define TABSTOP 8

int main()
{
	int spacesLeft = TABSTOP, c;

	while ((c = getchar()) != EOF)
	{
		if (spacesLeft == 0)
			spacesLeft = TABSTOP;

		if (c == '\t')
		{
			while (--spacesLeft >= 0)
				putchar(' ');
			spacesLeft = TABSTOP;
		}
		else
		{
			if (c == '\n')
				spacesLeft = TABSTOP;
			else
				--spacesLeft;
			putchar(c);
		}
	}

	return 0;
}
