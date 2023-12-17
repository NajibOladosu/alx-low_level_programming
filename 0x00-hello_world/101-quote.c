#include <unistd.h>

/**
 * main -  quote
 *
 * Return: 1
 **/

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quot, sizeof(quot) - 1);
	return (1);
}
