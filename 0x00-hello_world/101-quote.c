#include <unistd.h>
/**
 * main - Prints a sentence
 *
 * Return: 1
 */
int main(void)
{
	char sent[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, sent, 59);
	return (1);
}
