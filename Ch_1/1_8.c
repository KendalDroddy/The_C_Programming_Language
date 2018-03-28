/*************************************************
Write a program to print the value of EOF
*************************************************/
#include <stdio.h>

int main()
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}