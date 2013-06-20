#include <stdio.h>

/* char's types histogram  */

int main()
{
	int c, chars[128] = {0}, rows = 0;

	while ((c = getchar()) != EOF)
		if (c >= ' ' && c <= '~')
			++chars[c];

	//histogram rows
	for (int i = 32; i < 128; ++i)
		if (chars[i] > rows)
			rows = chars[i];

	//vertical histogram
	while (rows) {
		for (int i = 32; i < 128; ++i)
			if (rows <= chars[i])
				printf("█");
			else
				printf(" ");
		putchar('\n');
		--rows;
	}

	//header
	for (int i = 32; i < 128; ++i)
		printf("%c", i);
	putchar('\n');

	return 0;
}
