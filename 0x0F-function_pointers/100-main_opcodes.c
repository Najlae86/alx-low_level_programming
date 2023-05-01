#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argv: array of arguments
 * @argc: number of arg
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	int n, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
