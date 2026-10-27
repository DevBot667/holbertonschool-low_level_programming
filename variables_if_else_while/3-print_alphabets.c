#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabets using putchar
 * exactly three times, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
