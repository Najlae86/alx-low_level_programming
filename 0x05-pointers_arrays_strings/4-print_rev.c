#include "main.h"

/**
 * print_rev - prints a string in reverse follwed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int leng = 0;
	int a;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (a = leng; a > 0; a++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
