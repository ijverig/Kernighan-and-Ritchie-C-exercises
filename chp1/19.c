#include <stdio.h>

/* print reversed lines */

#define MAXLINE 1000

int getline(char line[], int maxLength);
void reverse(char string[]);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s\n", line);
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

	return len;
}

void reverse(char string[])
{
	int i = 0, j = 0;
	char tmp;

	while (string[j++] != '\0');
	--j;
	if (string[--j] == '\n')
		--j;
	string[j + 1] = '\0';

	while (i < j)
	{
		tmp = string[j];
		string[j] = string[i];
		string[i] = tmp;
		++i;
		--j;
	}
}
