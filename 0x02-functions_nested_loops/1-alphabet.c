#include "main.h"

/**
 * print_alphabet - entry point
 *
 * REturn: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_puychar(c);
		c++;
	}
	_putchar('\n');
}
