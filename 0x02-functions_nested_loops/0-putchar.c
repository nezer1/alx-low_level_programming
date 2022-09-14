#include "main.h"
/**
 *prints a string literal
 *@charac: string to be printed
 */
void printchar(char charac[])
{
int i = 0;
while(charac != 0)
{
  putchar(charac[i++]);
}
 
}
