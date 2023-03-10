#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: count
 * @argv: string
 * Return: 0 / 1
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	return (0);
}
