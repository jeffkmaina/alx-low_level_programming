#include <stdio.h>

/**
 * main -Entry Point
 * Return: 0 exited successfully
 */

int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
