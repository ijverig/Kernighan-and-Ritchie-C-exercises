#include <stdio.h>

/* print arbitrary longest line */

#define MAXLINE 1000

int getline(char line[], int maxLength);
void copy(char to[], char from[]);

int main()
{
	int len, longestLen = 0;
	char line[MAXLINE], longestLine[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		printf("%s", line);
		if (len >= MAXLINE)
			printf("(…)\n");

		if (len > longestLen) {
			longestLen = len;
			copy(longestLine, line);
		}
	}

	if (longestLen > 0) {
		printf("%d\n", longestLen);
		printf("%s", longestLine);
		if (longestLen >= MAXLINE)
			printf("(…)\n");
	}

	return 0;
}

int getline(char line[], int maxLength)
{
	int len = 0, c;

	while (len < maxLength - 1 && (c = getchar()) != '\n' && c != EOF)
		line[len++] = c;
	if (c == '\n')
		line [len++] = '\n';
	line[len] = '\0';

	// this loop is enough
	//for ( ; c != EOF && c != '\n'; ++len)
	//	c = getchar();
	if (line[len - 1] != '\n' && len >= maxLength - 1) {
		while ((c = getchar()) != '\n' && c != EOF)
			++len;
		++len;
	}

	return len;
}

void copy(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
