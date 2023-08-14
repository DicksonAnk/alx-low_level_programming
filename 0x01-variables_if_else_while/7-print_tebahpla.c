#include <stdio.h>

/**
* main - entry
*
* Return: return zero as success
*
*/

int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
