#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet 10x in lower
 *
 * Return: none(void)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
	}
	putchar('\n');
}
