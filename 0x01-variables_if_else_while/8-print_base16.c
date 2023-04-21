#include <stdio.h>

/**
 * main - main block
 * Description: A program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	c = 'a';
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
