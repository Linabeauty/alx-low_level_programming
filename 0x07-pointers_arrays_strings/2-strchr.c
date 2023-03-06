#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @c: Occurrence of the character
 *
 * @s: In the string
 *
 * Return: A pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
