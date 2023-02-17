#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabets in lower and then in upper
 *
 * Return: 0
 */
int main(void)
{
	char i = 'A';
	char j = 'a';
	char u, l;
	
	while (i <= 'Z')
	{
		l = tolower(i);
		putchar(l);
		i++;
	}
	while (j <= 'z')
	{
		u = toupper(j);
		putchar(u);
		j++;
	}
	putchar('\n');
	return (0);
}
