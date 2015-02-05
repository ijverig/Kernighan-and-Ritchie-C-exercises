#include <stdio.h>

/* print stripped lines */

#define MAXLINE 1000

int getline(char line[], int maxLength);
int strip(char string[], int len);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0)
		if (strip(line, len))
			printf("%s\n", line);
	
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

int strip(char string[], int len)
{
	while (--len >= 0 && (string[len] == '\n' || string[len] == '\t' || string[len] == ' '));
	string[++len] = '\0';

	return len;
}
