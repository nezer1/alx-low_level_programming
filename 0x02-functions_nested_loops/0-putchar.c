#include <stdio.h>
#include "main.h"
/**
 *printchar - prints a string literal
 *@charac: string to be printed
 */
void printchar(char charac[])
{
int i = 0;
while (charac[i] > 0)
{
putchar(charac[i++]);
}
putchar('\n');
}

int main(void)
{
printchar("_putchar");
return (0);
}
