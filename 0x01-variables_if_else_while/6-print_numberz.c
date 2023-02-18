#include <stdio.h>
/**
 * main - prints single digits of base 10
 *
 * Return: 0
 */
int main(void)
{
	int r = '0';

	while (r <= '9')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
