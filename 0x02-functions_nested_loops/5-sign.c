#include "main.h"
#include <stdio.h>
0;10;1c
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
putchar('+');
}
if (n == 0)
{
putchar('0'); 
return (0);
}
if (n < 0)
{
putchar('-');
return (-1);
}
return (0);
}
