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
if (a[i++] < 0)
{
_putchar('-');
}
if (a[i++] / 10)
{
print_array(a[i] / 10);
}
_putchar('0' + (a[i]) % 10);
}
} 
