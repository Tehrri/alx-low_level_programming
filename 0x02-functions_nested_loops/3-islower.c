#include "main.h"

/**
 * _islower - checks if character is lowercase
 *
 * @c: is the Int value to be compared with ASCII value
 *
 * Return: returns 1 if 'c' is lowercase returns O otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
