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

	for (int i = 0; i < (strlen(message)); i++)
		_putchar(message[i]);
	_putchar('\n');
	return (0);
}
