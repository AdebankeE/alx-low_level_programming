#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: character to test
 * Return: 1 if it is lowercase letter, 0 if it is not lowercase letter
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
