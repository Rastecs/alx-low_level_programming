#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char l, n = 'A';

	while (n <= 'Z')
	{
		l = tolower(n);
		putchar(l);
		n++;
	}
	putchar ('\n');
	return (0);
}
