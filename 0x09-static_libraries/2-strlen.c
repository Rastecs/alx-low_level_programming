#include "main.h"
/**
 * _strlen - return length of string
 * @s: pointer to s
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
