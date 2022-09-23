#include <stdio.h>

/** 
 * main- alphabet
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
while (i <= 'z')
{
if (i <= 'Z')          
{
putchar('a' + i);
}
else 
{
if (i == '[')
{
i = 0;
}
putchar('A' + i);
}
i++;
}
putchar('\n');
return (0);
}
