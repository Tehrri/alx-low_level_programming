#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Determines greater than 5, less than 6, or is 0
 *
 * Return: Always 0
 */

int main (void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (1 < 6 && 1 !=0)
	{
		printf("Last digit of %D is %D and is less than 6 and not 0\n", n, l);
	}
	else
       	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}

	return (0);
}
