#include <stdio.h>

/* entab */

// I do not handle tabs among blanks here, they're simply output. The outcome is correct, but not tab optimized

#define TABSTOP 8

int main()
{
	int c, col = 0, colFirst, i, numTabs;

	while ((c = getchar()) != EOF)
	{
		++col;
		if (c == ' ')
		{
			colFirst = col;
			// count amount of blanks
			while ((c = getchar()) == ' ')
				++col;
			// it can be a between words space
			if (colFirst == col)
				putchar(' ');
			else
			{
				// it can be right before a tabstop
				if (colFirst % TABSTOP == 0)
					putchar(' ');
				// tabstops between first and last space
				numTabs = col / TABSTOP - colFirst / TABSTOP;
				for (i = 0; i < numTabs; ++i)
					putchar('\t');
				// fill in the remaining space with blanks
				for (i = 0; i < (numTabs == 0 ? col - colFirst + 1 : col % TABSTOP); ++i) 
					putchar(' ');
			}
			++col;
		}
		if (c == '\n')
			col = 0;
		putchar(c);
	}

	return 0;
}
