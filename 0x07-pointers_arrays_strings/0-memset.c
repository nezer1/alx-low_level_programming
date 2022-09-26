#include "main.h"
/**
 * _memset- set memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *temp;
temp = s;
while (i < n)
{
s[i] = b;
}
return (temp);
}
