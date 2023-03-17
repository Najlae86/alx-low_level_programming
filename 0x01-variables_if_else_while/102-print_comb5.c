#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers.
*
*Return: Always 0.
*/
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 1; d < 10; d++)
				{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar(' ');
				putchar((c % 10) + '0');
				putchar((d % 10) + '0');

				if (a == 9 && b == 8 && c == 9 && d == 9)
					continue;
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
