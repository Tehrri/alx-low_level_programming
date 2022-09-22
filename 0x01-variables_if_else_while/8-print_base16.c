#include <stdio.h>

/**
 * main - this is a function
 *
 * Descriptin: prints numbers between 0 to 9 and letters between a to f
 *
 * Return: Always 0 
 */

int main(void)
{
	char c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
