#include "main.h"
/**
 * divs - checks if the number is divisible
 * @num: the number
 * @div: the divisor
 * Return: divisor
 */
int divs(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divs(num, div + 1));
}
/**
 * is_prime_number - identify prime numbers
 * @n: Integer number
 * Return: 0 if not prime or 1 if prime
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divs(n, div));
}
