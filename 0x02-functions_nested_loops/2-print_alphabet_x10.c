#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return : void
 */

void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
