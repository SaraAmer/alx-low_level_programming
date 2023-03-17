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
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d", n, t);
	if (t > 5)
	{
		printf(" and is greater than 5");
	} else if (t == 0)
	{
		printf(" and is 0");
	} else if (t < 6)
	{
		printf(" and is less than 6 and not 0");
	}

	return (0);
}
