#include "main.h"

/**
 * print_diagonal- print line
 * @n: number of times
 */
void print_diagonal(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar('\\');
_putchar('\n');
i++;
}
_putchar('\n');
}
}
