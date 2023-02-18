#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char i = 'A';
	char j;

	while (i <= 'Z')
	{
		if (i == 'Q')
		{
			i++;
			continue;
		}
		else if (i == 'E')
		{
			i++;
			continue;
		}
		j = tolower(i);
		putchar(j);
		i++;
	}
	putchar('\n');
	return (0);
}
