#include "main.h"

/**
 * print_diagonal- print line
 * @n: number of times
 */
void print_diagonal(int n)
{
int i = 0;
int j = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
while (j < i)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
i++;
}
_putchar('\n');
}
}
