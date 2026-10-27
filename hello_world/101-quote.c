#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote to the standard error using write
 *
 * Return: Always 1 (Error)
 */
int	main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			60);
	return (1);
}
