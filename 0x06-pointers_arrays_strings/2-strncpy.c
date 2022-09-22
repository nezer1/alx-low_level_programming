#include "main.h"

/**
 * _strncpy- copies string
 * @dest: dest
 * @src: src
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
char *temp;
int i;
i = 0;
temp = dest;
while (*src != '\0')
{
if (i < n)
{
*dest = *src;
dest++;
src++;
}
i++;
}
*dest = '\0';
return (temp);
}
