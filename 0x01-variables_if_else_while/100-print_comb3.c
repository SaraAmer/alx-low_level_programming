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
	int j;

	/* your code goes there */
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10 ; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
