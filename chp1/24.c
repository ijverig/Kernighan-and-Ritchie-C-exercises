#include <stdio.h>

/* check for simple syntax errors */

#define YES 1
#define NO  !YES

int main()
{
	/* c is the current character, c_prev is the previous one and c_pprev the one before c_prev */
	int c, c_prev='\0', c_pprev = '\0', closing_symbol;
	int is_comment = NO, is_string = NO;
	int paren = 0, brack = 0, brace = 0;

	while ((c = getchar()) != EOF)
	{
		if (!is_comment & !is_string)
		{
			if (c == '(')
				++paren;
			else if (c == ')')
				--paren;
			else if (c == '[')
				++brack;
			else if (c == ']')
				--brack;
			else if (c == '{')
				++brace;
			else if (c == '}')
				--brace;

			if (paren < 0 || brack < 0 || brace < 0)
			{
				printf("Syntax error: closing symbol without opening match.\n");
				return 0;
			}
		}
		/* closing the comment */
		if (is_comment && c == '/' && c_prev == '*')
			is_comment = NO;
		/* begining the comment */
		else if (!is_comment && !is_string && c == '*' && c_prev == '/')
			is_comment = YES;
		/* closing the string or character, handles escape sequences \' and \\' */
		else if (is_string && c == closing_symbol && (c_prev != '\\' || c_pprev == '\\'))
			is_string = NO;
		/* begining the string or character */
		else if (!is_string && !is_comment && (c == '"' || c == '\''))
		{
			is_string = YES;
			closing_symbol = c;
		}
		c_pprev = c_prev;
		c_prev = c;
	}

	if (paren > 0 || brack > 0 || brace > 0)
		printf("Syntax error: opening symbol without closing match.\n");
	else
		printf("No syntax error.\n");

	return 0;
}
