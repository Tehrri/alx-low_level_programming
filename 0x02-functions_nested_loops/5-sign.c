#include "main.h"

/**
 * print_sign - print + if n is greaterthan 0,0 if n is 0, - if n is lessthan 0
 *
 * @n: takes integer type input for function
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 *
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}

