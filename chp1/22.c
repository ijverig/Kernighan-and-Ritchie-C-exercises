#include <stdio.h>

/* fold arbitrarily large lines */

#define BREAK_COL 11
#define TABSTOP   8

int main()
{
	char buffer[BREAK_COL];
	int c, col = 0;
	
	while ((c = getchar()) != EOF)
	{
		buffer[col++] = c;
		
		if (c == '\t')
		{
			//buffer[col - 1] = ' ';
			while (col < BREAK_COL && col % TABSTOP)
				buffer[col++] = 127;
		}
		if (c == '\n' || col == BREAK_COL)
		{
			while (col > 0 && (buffer[col - 1] == '\n' || buffer[col - 1] == ' ' || buffer[col - 1] == '\t' || buffer[col - 1] == 127))
				--col;
			buffer[col] = '\0';
			printf("%s\n", buffer);
			col = 0;
		}
	}
	
	return 0;
}
