#include "main.h"

/**
 * more_numbers- num
 */

void more_numbers(void)
{
int i = 0;
while (i < 14)
{
if (i > 9)
{
_putchar(i /10 + '0');
}
else
{
_putchar(i % 10 + '0');
}
i++;
}
_putchar('\n');
}
