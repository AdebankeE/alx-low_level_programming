#include "main.h"

/**
 * _puts - Function to print a string, followed by a new line to stdout
 * @str: This is my input string
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
	i++;
}
_putchar('\n');
}
