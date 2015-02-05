#include <stdio.h>

/* Fahrenheit to Celsius table */

#define LOWER 0
#define UPPER 300
#define STEP  20

int main()
{
	float fahr;
	
	printf(" F \t  C  \n");
	printf("---\t-----\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3.0f\t%5.1f\n", fahr, 5.0/9.0 * (fahr - 32.0));
	
	return 0;
}
