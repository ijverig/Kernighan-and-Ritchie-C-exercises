#include <stdio.h>

/* count words, chars and lines */

#define TRUE  1
#define FALSE !TRUE

int main ()
{
  int c, nl = 0, nc = 0, nw = 0, atWord = FALSE;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == '\t' || c == ' ' || c == '\n')
      atWord = FALSE;
    else if (!atWord) {
      atWord = TRUE;
      ++nw;
    }
  }

  printf("%d chars, %d words, %d lines\n", nc, nw, nl);

  return 0;
}

