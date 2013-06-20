#include <stdio.h>

/* entab */

#define TABSTOP 8

int main()
{
	int c, spaces, col = 1;

	while ((c = getchar()) != EOF)
	{
		spaces = 0;
		while (c == ' ' || c == '\t')
		{
			if (c == '\t' || (spaces > 0 && (col + spaces) % TABSTOP == 0))
			{
				col += TABSTOP - col % TABSTOP;
				putchar('\t');
				spaces = 0;
			}
			else
				++spaces;
			c = getchar();
		}
		col += spaces;
		while (spaces-- > 0)
			putchar(' ');
		++col;
		putchar(c);
		if (c == '\n')
			col = 1;
	}

	return 0;
}
