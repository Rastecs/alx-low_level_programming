#include "main.h"
/**
 * len - returns length of string
 * @s: pointer to string
 * Return: length of a string
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
/**
 * comp - compares string characters
 * @s: pointer to string
 * @n1: smallest iterator num
 * @n2: largest int num
 * Return: nothing
 */
int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detect if palidrome string
 * @s: pointer to string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, len(s) - 1));
}
