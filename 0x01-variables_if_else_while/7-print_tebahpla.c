#include <stdio.h>
/**
 * main - prints lowecase in reverse
 *
 * Return: 0
 */
int main(void)
{
	char r = 'z';

	while  (r >= 'a')
	{
		putchar(r);
		--r;
	}
	putchar('\n');
	return (0);
}
