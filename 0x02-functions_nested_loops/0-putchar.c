#include "main.h"

/**
* main - main entry function
*
* Return: 0 for success
*/

int main(void)
{
	char message[] = "_putchar";
	int i, lenmsg = 8;

	for (i = 0; i < lenmsg; i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
	return (0);
}
