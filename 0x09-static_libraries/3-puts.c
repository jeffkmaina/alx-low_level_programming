#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: pointer to string to print
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
		_putchar(str[a]);

	}
	_putchar('\n');
}
