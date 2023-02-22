#include <stdio.h>
/**
 * print_alphabet - outputs alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
