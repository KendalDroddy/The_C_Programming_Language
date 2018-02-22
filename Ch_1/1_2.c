/*************************************************
Experiment to find out what happens when printf's
argument string contains \c, where c is some
character not listed above.
*************************************************/

#include <stdio.h>

int main()
{
	/*
		Using argument strings such as \p or \q
		produces an unknown escape sequence warning
	*/
	printf("Hello, World\q");
}