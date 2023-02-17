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
			continue;
		else if (i == 'E')
			continue;
		j = tolower(i);
		putchar(j);
		i++;
	}
	putchar('\n');
	return (0);
}
