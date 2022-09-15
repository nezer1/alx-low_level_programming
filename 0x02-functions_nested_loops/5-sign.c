#include "main.h"
#include <stdio.h>

/**
 *print_sign - prints sign of a number
 *
 * @n: number
 *
 * Return: 1 for positive 
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0'); 
return (0);
}
else 
{
putchar('-');
return (-1);
}
return (0);
}
