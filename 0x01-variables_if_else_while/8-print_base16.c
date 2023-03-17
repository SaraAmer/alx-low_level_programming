#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 *  main - Print random number last number
 *  Return: 0 if success
 */
int main(void)
{
	int i;

	/* your code goes there */
	for (i = 0; i < 16; i++)
	{
		printf("%x", i);
	}
	putchar('\n');

	return (0);
}
