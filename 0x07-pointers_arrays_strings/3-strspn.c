#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: poiner to s
 * @accept: pointer accepted value
 * Return: k
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0;
	unsigned int k = 0;

	while (*s != '\0')
	{
		i = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				i = 1;
			}
			++j;
		}
		j = 0;
		if (i == 0)
		{
			break;
		}
		++k;
		s++;
	}
	return (k);
}
