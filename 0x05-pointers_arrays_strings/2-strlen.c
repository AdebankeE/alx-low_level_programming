#include "main.h"

/**
 * _strlen - Function that return the length of a string
 * @s: this is the input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;

return (i);
}
