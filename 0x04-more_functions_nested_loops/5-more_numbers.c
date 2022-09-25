#include "main.h"
0;10;1c
/**
 * more_numbers- num
 */

void more_numbers(void)
{
int i = 0;
int j = 0;
while (j < 10)
{
while (i <= 14)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
i++;
}
j++;
i = 0; 
_putchar('\n');
}
}
