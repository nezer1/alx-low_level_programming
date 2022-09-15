#include "main.h"

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
putchar(+);
return (1);
}
if (n == 0)
{
putchar(0); 
return (0);
}
if (n < 0)
{
putchar(-);
return (-1);
}
}
