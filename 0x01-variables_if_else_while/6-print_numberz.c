#include <stdio.h>

/**
 * main - Prints all single digit numbers followed by a line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
