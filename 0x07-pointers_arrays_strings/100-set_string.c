#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to pointer s
 * @to: pointer to to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
