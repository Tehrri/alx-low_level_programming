#include "main.h"

/**
 * _isalpha - checks if a charcter is lower case or upper case
 *
 * @c: unsigned int value to be compared with ASCII value
 *
 * Return: 1 if c is true else 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
