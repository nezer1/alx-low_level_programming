#include <stdio.h>

/**
 * main- print
 * Return: 0;
 */
int main(void)
{
int i = 48;
while (i <= 'f')
{
if (i <= '9')
{
putchar(i);
}
else
{
putchar(39 + i);
}
i++;
}
putchar('\n');
return (0);
}
