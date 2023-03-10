#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: int n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	return (dest);
}
