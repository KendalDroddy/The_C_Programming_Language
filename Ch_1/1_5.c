/*************************************************
Modify the temperature conversion program to
print the table in reverse order, that is,
from 300 degrees to 0.
*************************************************/
#include <stdio.h>

#define LOWER 0 	/* lower limit of the table */
#define UPPER 300 	/* upper limit */
#define STEP  20	/* step size */

/* Print Fahrenheit-Celsius table */
int main()
{
	int fahr;

	printf("\nFahrenheit-Celsius Table\n");
	printf("----------------------------\n");
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		printf(" %3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}