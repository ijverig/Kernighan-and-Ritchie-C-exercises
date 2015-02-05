#include <stdio.h>
#include <stdlib.h>

/* loading animation */

int main()
{
	int i;
	for (i = 0; i < 3; ++i){
		system("sleep 0.1;clear");
		putchar('-');
		putchar('\n');
		system("sleep 0.1;clear");
		putchar('/');
		putchar('\n');
		system("sleep 0.1;clear");
		putchar('|');
		putchar('\n');
		system("sleep 0.1;clear");
		putchar('\\');
		putchar('\n');
	}

	return 0;
}

