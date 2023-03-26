#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: takes integer type input for function
 *
 * Return: returns an unsinged int value to calling function
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	{
		n *= -1;
		return (n);
	}
}

