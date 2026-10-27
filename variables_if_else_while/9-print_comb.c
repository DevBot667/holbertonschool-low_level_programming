#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by comma and space, followed by a new line.
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
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
