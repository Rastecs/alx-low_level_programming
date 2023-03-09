#include "main.h"
/**
 * find_sqrt - function that returns the natural square root of a number
 * @n: input number
 * @c: iteration number
 * Return: square root
 */
int find_sqrt(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c == n / 2)
		return (-1);
	return (find_sqrt(n, c + 1));
}
/**
 * _sqrt_recursion - find square root
 * @n: number n
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int c = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(n, c));
}
