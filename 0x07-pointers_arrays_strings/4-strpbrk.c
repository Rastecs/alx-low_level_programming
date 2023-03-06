#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer s
 * @accept: pointer accept
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (*s != '\0')
	{
		i = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				i = 1;
			}
			j++;
		}
		j = 0;
		if (i == 1)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
