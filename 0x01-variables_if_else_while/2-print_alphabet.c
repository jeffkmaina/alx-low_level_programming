#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0 exited success non zero OW
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
