#include <stdio.h>

/**
 * main- print
 * Return: 0;
 */
int main(void)
{
int i = 0;
int j = 0;
while (j <= 'f')
{
if (i <= '9')
{
putchar(i + '0');
i++;
}
else 
{  
putchar(j + 'a');
j++;
}
}
putchar('\n');
return (0);
}
