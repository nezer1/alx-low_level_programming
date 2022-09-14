#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i,count = 1;
while (count <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
count++;
}
}
