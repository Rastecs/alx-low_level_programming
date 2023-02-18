#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char r = '0';
	char l = 'a';

	while (r <= '9')
	{
		putchar(r);
		r++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
