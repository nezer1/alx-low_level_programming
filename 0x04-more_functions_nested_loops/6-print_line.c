#include "main.h"
0;10;1c
/**
 * print_line- print line
 * @n: number of times
 */
void print_line(int n)
{
int i = 0;
if (n < 0)
{
_putchar('\n');
}
else
{   
while (i < n)
{
_putchar('-');
}
}
_putchar('\n');
}
