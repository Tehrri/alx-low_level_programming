#include <stdio.h>

/**
 * Main: this is a function
 *
 * Description: prints the alphabet in both upper case and lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char ch;

	for (c = 'a'; c <= 'z'; ch++)
		putchar(c);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
