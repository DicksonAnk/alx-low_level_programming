#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry function
*
* Return: Return 0 as success
*
*/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n > 0 ? n % 10 : -n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);
	return (0);
}
