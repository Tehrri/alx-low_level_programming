#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: this program prints exactly "and that piece of art is useful"
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: this time we return 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
