#include <stdio.h>

/* remove multiple spaces */

int main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(' ');
			while ((c = getchar()) == ' ');
		}
		putchar(c);
	}
	
	return 0;
}
