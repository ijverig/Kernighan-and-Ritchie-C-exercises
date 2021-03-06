#include <stdio.h>

/* word length histogram */

#define MAX_WORD_LEN 10
#define MAX_LEN MAX_WORD_LEN + 1

int main()
{
	int c, hist[MAX_LEN] = {0}, len = 0;

	//count words
	while ((c = getchar()) != EOF)
		if (c == '\t' || c == ' ' || c == '\n' || c == '.' || c == '!' || c == '?' || c == ',' || c == ';' || c == ':') {
			if (len && len < MAX_LEN) {
				++hist[len];
				++hist[0];
			}
			len = 0;
		}
		else
			++len;

	//horizontal histogram
	for (len = 1;len < MAX_LEN; ++len) {
		printf("%2d ", len);
		while (hist[len]--)
			putchar('#');
		putchar('\n');
	}

	//total
	printf("%d words\n", hist[0]);

	return 0;
}
