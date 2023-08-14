#include <stdio.h>

/**
* main - main function
*
* Return: return zero
*
*/

int main(void)
{
it n, t, z;

for (z = '0'; z <= '7'; z++)
{
for (n = z + 1; n <= '9'; n++)
{
for (t = n + 1; t <= '9'; t++)
{
putchar(z);
putchar(n);
putchar(t);
if (z < '7' || n < '8' || t < '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
