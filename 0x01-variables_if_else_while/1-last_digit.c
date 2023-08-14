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
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
else
		prinft("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);
	return (0);
}
