#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints alphabet without q and e
 *
 * return : Always 0 when the funtion ends.
 */

int main(void)
{
	char ch;

	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{

		if (ch != 'e' && ch != 'q')
			putchar(ch);
		}
	}
	putchar ('\n');
	return (0);
}
