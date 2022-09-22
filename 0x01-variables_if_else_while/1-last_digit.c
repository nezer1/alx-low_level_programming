#include <stdlib.h>
#include <time.h>

/**
 * main- print
 * Return: success 0
 */
int main(void)
{
int n;
int last_d = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_d = n % 10;
printf("Last digit of %d %d\n", last_d, n);
if (n > 5)
{
printf(" and is greater than 5\n");
}
if (n == 0)
{
printf(" and is 0\n");
}
if (n < 6 && n != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
