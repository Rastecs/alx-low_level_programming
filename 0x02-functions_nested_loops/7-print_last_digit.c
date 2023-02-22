#include "main.h"
/**
 * print_last_digit - prints the last digit of a value
 *
 * @n: value
 * Return: last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return(m);
}
