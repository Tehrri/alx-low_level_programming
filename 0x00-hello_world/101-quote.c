#include <unistd.h>

/**
 * main - Entry point
 *
 * Dexcription: prints exactly "and that piece of art is useful"
 * -Dora Korpar, 2015-10-19",
 *
 *  Return: This time we return an error 1.
 */

int main(void)
{
       char quo[] ="and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";

       write(1, quo, 59);
	Return (1);
}
