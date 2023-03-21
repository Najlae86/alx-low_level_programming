#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting from 0
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');

		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if ((z / 10) + '0')
			{
				_putchar((z / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((z % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
