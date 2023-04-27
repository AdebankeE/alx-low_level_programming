#include "main.h"

/**
 * print numbers - check for digit from 0 - 9
 * Return: Nothing
 */
void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar(i + '0');
++i;
}
_putchar('\n');
}
