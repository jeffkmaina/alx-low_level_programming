#include <stdio.h>

/**
 * main -Entry Point
 * Return: 0 exited successfully
 */

int main(void)
{
	char ch;
	char CH;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return(0);
}
