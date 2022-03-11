#include <stdio.h>
/* 
 * main - print alphabet apart from q and e
 * Return: 0 exited successfully
 */

int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		if ((ch !='q') && (ch !='e'))
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
