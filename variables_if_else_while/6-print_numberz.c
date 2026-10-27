#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from0,
 * followed by a new line, using putchar twice and no char variables.
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
