#include <stdio.h>

/**
 * main : Entry point
 *
 * Descrpition : prints reversed alphabet
 *
 * Return : Always 0
 */
int main(void)
{
	char a = 'z';

	for (a = 'z'; a >= 'a'; --a)
		putchar(a);

	putchar('\n');

	return (0);
}
