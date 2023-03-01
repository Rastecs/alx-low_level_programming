#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @z: pointer to z
 * Return: string
 */
char *leet(char *z)
{
	int i, j;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	i = 0;
	while (z[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (z[i] == s1[j] || z[i] == S1[j])
			{
				z[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (z);
}
