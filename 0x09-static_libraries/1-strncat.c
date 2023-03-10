#include "main.h"
/**
 * _strncat - function that concatenats two strings
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: size
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
