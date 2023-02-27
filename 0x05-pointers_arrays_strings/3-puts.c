#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to string
 * Return: string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
