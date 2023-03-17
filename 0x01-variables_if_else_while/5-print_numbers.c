#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = '0'; x < '10'; x++)
		printf(x);

	printf('\n');

	return (0);
}
