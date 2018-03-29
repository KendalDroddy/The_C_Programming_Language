/*************************************************
Write a program to count blanks, tabs, & newlines
*************************************************/
#include <stdio.h>

/* Count blanks, tabs & newlines */
int main()
{
	int c, b = 0, t = 0, nl = 0;

	while((c = getchar()) != EOF)
	{
		if(c == '\n')
			++nl;
		if(c == '\t')
			++t;
		if(c == ' ')
			++b;
	}
	printf("Blanks: %d Tabs: %d Newlines: %d\n", b, t, nl);
}