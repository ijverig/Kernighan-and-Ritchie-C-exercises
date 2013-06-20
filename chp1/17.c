#include <stdio.h>

/* print lines longer than 80 chars */

#define MAXLINE 1000

int getline(char line[], int maxLength);
void copy(char to[], char from[]);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 80)
			printf("%s", line);

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

	return len;
}

void copy(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
