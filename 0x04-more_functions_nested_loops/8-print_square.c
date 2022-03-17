#include "main.h"

/**
*print_square - function prints a square followed by a new line.
*
*@size: Where size is the size of the square.
*
*Return: 0.
*/

void print_square(int size)
{
int left;
int right;

if (size > 0)
for (left = 0; left < size; left++)
{
for (right = 0; right < size; right++)
{
_putchar('#');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
