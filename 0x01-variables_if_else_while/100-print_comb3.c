#include <stdio.h>
/**
 * main - prints all possible different combinations of 2
 *
 * Return: 0
 */
int main(void)
{
	int l, n;

	for (n = '0'; n <= '9'; n++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			if (n < l)
			{
				putchar(n);
				putchar(l);
				if (n != '8' || (n == '8' && l != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
