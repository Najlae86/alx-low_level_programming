#include "main.h"

/**
 * puts2 - prints every character of a string starting from the first one
 * @str: string
 * return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
