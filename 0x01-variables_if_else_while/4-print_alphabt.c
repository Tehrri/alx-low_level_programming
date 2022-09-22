#include <stdio.h>

/**
 * main - this is a function
 *
 * Description:  prints alphabet without q and e
 *
 * return : 0 when the funtion ends.
 */

int main(void)
{
	char ch;

	{
		for (ch = 'a';ch <= 'z';ch++)
		{
		if (ch != 'e' && ch != 'q')
			putchar(ch);

		}
	}
	putchar ('\n');
	return (0);
}
