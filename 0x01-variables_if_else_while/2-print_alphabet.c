#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: program that prints alphabets in lowecase
 *
 * Return : Always 0 (Success)
 *
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar ('\n');

	return (0);
}

