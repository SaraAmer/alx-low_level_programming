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
	int k;

	/* your code goes there */
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9 ; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}


			}

		}
	}
	putchar('\n');

	return (0);
}
