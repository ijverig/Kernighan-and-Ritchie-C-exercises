#include <stdio.h>

/* Celsius to Fahrenheit table */

int main ()
{
	float celsius, fahr;
	int start, end, step;
	
	start = 0;
	end   = 300;
	step  = 20;
	
	printf (" C \t  F  \n");
	printf ("---\t-----\n");
	celsius = start;
	while (celsius <= end) {
		fahr = 9.0/5.0 * celsius + 32.0;
		printf ("%3.0f\t%5.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
	return 0;
}

