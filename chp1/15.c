#include <stdio.h>

/* Fahrenheit to Celsius table through function */

#define LOWER 0
#define UPPER 300
#define STEP  20

float fahr2celsius(float fahr);

int main ()
{
	float fahr;
	
	printf (" F \t  C  \n");
	printf ("---\t-----\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf ("%3.0f\t%5.1f\n", fahr, fahr2celsius(fahr));
	
	return 0;
}

float fahr2celsius(float fahr)
{
		return 5.0/9.0 * (fahr - 32.0);
}
