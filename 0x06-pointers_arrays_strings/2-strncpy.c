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
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
return (temp);
}
