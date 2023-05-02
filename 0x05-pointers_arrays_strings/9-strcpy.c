#include "main.h"

/**
 * char *_strcpy - Function that copies string
 * @dest: string destination
 * @src: string source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
char *guard = dest;

while (*src)
{

*dest++ = *src++;
*dest = 0;
}
return (guard);
}
