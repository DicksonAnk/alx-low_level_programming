#include <stdio.h>

/**
* main - entry function.
*
* Return: zero for success
*/

int main(void)
{
	char a = '0';
	char l = 'a';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
