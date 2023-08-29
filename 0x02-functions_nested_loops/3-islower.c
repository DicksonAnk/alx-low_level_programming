#include <ctype.h>
#include "main.h"

/**
*  _islower - function checks if letter passed is lowercase or not
* @c: the letter to be checked if lower or not
* Return: 1 if letter is lowercase, 0 if not
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
