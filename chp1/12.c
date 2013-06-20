#include <stdio.h>

/* print one word per line  */

#define TRUE  1
#define FALSE !TRUE

int main ()
{
	int c, atWord = FALSE;

	while ((c = getchar()) != EOF)
		if (c == '\t' || c == ' ' || c == '\n') {
			if (atWord) {
				atWord = FALSE;
				putchar('\n');
			}
		}
		else {
			if (!atWord)
				atWord = TRUE;
			putchar(c);
		}

  return 0;
}

