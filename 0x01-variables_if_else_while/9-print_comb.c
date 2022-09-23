#include <stdio.h>

/**
 * main- print
 * Return: 0
 */
int main(void)
{
int i = 48;
while (i <= '9')
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}
return (0);
}
