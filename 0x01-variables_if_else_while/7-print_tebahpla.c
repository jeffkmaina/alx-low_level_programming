#include <stdio.h>
/**
 * main - print alphabet backwards
 * Return: 0 exits successfully
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
