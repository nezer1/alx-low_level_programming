#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: pointer to array
 * @n: number of elements to print from array
 */
void print_array(int *a, int n)
{
int i = 0;
while(i < n)
{
_putchar('0' + a[i++]);
}
}  
