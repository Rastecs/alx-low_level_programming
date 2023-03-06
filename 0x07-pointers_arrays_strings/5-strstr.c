#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: pointer to a group
 * @needle: pointer to string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b == *haystack && *b != '\0' && *haystack != '\0')
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
		{
			return (a);
		}
		haystack = a + 1;
	}
	return (NULL);
}
