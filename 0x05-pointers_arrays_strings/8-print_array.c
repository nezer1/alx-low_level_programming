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
print(a[i++]);
_putchar(',');
_putchar('\t'); 
} 
}

/**
 * print - print integer
 * @a: intger
 */
void print(int a)
{
if (a < 0)
{
_putchar('-');
}
if (a / 10)
{
print(a / 10);
}
 _putchar('0' + (a % 10));
}
