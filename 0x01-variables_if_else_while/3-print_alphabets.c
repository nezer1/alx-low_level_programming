#include <stdio.h>

/** 
 * main- alphabet
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
while (i < 'z')
{
if (i <= 'Z')          
{
putchar('A' + i);
}
else
{
putchar('a' + i);
}
i++;
}
putchar('\n');
return (0);
}
