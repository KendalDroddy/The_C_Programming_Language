/*************************************************
Verify that the expression getchar() != EOF
is 0 or 1
*************************************************/
#include <stdio.h>

#define LOWER 0 	/* lower limit of the table */
#define UPPER 300 	/* upper limit */
#define STEP  20	/* step size */

/* Print Fahrenheit-Celsius table */
int main()
{
	/* Copy input to output - 2nd version */
	int c;
	
	c = getchar();
	while((c = getchar()) != EOF)
	{
		printf("EOF Value: %d ", c != EOF);
		putchar(c);
		c = getchar();
	}
}