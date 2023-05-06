#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 1 for little, 0 for big.
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;
	return (*c);
}
