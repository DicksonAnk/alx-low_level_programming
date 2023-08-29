#include <ctype.h>
#include "main.h"

/**
* _isalpha - function checks if value passed is alphabet or not
* @c: value to be checked if alphabet or not
* Return: 1 if value is alphabet, 0 if not
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
