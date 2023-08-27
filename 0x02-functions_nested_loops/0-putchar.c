#include "main.h"
#include <string.h>

/**
* main - main entry function
*
* Return: 0 for success
*/

int main(void)
{
	char message[] = "_putchar";
	int lenmsg = strlen(message);

	for (int i = 0; i < lenmsg; i++)
		_putchar(message[i]);
	_putchar('\n');
	return (0);
}
