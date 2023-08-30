#include "main.h"
#include <stdlib.h>

/**
* print_last_digit - print last digit of an interger
* @value: the integer
*
* Return: the value of the last digit
*/

int print_last_digit(int value)
{
	int n = abs(value % 10);

	_putchar(n);
	return (n);
}
