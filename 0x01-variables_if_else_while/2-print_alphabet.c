#include <stdio.h>

/**
* main - entry
*
* Return: zero
*
*/

int main(void)
{
	char a;

	for (a = 'a', a <= 'z', a++)
		putchar(a);
	putchar('\n');

	return (0);