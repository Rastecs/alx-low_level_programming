#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: NULL or pointer to string
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	arr = (char *) malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		arr[j] = str[j];
	return (arr);
}
