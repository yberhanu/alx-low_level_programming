#include <stdio.h>/**
* main - prints largest prime factor.
* Return: Always 0.
*/
int main(void)
{
long int a, b;
a = 612852475143;
for (b = 2; b <= a; b++)
{
if (a % b == 0)
{
a /= b;
b--;
}
}
printf("%ld\n", b);
return (0);
}
