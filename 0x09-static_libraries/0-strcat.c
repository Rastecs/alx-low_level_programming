#include "main.h"
/**
 * _strcat - function that concatenats two string
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
