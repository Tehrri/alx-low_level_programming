#include <stdio.h>

/**
 * Main - prints numbers between 0 to 9 with commas and spaces
 *
 * Return: 0 as it executes
 */

int main(void)
{
	int a;

	for (a = 48; a <=57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		puchar('\n');
		return (0)
}
