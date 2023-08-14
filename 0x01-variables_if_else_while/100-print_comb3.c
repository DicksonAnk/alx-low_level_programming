#include <stdio.h>

/**
* main - main function
*
* Return: return zero for success
*
*/

int main(void)
{
int t;
int w;

for (t = 0; t <= 9; t++)
{
for (w = t + 1; w <= 9; w++)
{
putchar(t + '0');
putchar(w + '0');
if (t < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
