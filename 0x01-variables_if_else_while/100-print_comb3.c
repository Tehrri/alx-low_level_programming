#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers between 00 to 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar (a % 10 + '0');
			putchar (b % 10 + '0');

			if (a == 8 && b == 9)
				continue;

			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
