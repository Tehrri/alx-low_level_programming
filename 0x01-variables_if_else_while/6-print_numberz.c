#include <stdio.h>

/**
 * main: main entry point
 *
 * Description: prints all single digit numbers of base 10 from 0
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	{
		for (i = 0; i <= 9;)
			putchar(i + '0');
		++i;
	}
		putchar('\n');

		return (0);
}
