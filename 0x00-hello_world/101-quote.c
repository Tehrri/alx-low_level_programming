#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: this program prints exactly "and that piece of art is useful"
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 *  Return: Always 1.
 */

int main(void)
{
       char quo[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";

       write(1, quo, 59);
	Return (1);
}
