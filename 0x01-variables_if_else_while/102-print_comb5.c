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
	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < 10) 
			{
				putchar('0' + 0);
			}
			putchar('0' + i);
			if(j < 10)
			{
				putchar('0' + 0);
			}
			putchar('0' + j);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
