#include "main.h"
/**
* print_triangle - prints a triangle.
* @size: numbers of lines.
* Return: no return.
*/
void print_triangle(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 1; j < (size - i); j++)
_putchar(' ');
for (j--; j < size; j++)
_putchar('#');
if (i < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
