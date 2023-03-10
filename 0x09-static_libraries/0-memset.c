#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to s
 * @b: constant char b
 * @n: integer n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i += 1;
	}
	return (s);
}
