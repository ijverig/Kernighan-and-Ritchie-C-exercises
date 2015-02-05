#include <stdio.h>

/* Fahrenheit to Celsius table */

int main()
{
	float fahr, celsius;
	int start, end, step;
	
	start = 0;
	end   = 300;
	step  = 20;
	
	printf(" F \t  C  \n");
	printf("---\t-----\n");
	fahr = start;
	while (fahr <= end) {
		celsius = 5.0/9.0 * (fahr - 32.0);
		printf("%3.0f\t%5.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
	return 0;
}
