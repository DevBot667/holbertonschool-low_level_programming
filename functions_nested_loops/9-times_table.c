#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: Uses two nested loops, one for the rows
 * and one for the columns
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
			}
			if (res >= 10)
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
