#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: digit
 *
 * Return: 0 for success
 */
int print_last_digit(int n)
{
int rem;
if (n < 0)
  n *= -1;
rem = n % 10;
return (rem);
}
