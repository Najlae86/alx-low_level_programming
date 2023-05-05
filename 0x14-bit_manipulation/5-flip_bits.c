#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from ont number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int dif, res = 1;

	dif = n ^ m;
	for (i = 0; i <= 63; i++)
	{
		if (res == (dif & res))
			j++;
		res <<= 1;
	}
	return (j);
}
