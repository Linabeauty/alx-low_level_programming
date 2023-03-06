#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to change
 * @to: String to change pointer to
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
