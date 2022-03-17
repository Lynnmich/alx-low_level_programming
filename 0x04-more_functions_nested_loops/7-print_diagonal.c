#include "main.h"

/**
*print_diagonal - function that draws a diagonal line on the terminal.
*
*@n: number.
*
*Return: diagonal line on the terminal
*/

void print_diagonal(int n)
{
int left;
int right;

if (n > 0)
{
for (left = 0; left < n; left++)
{
for (right = 0; right <= left; right++)
{
if (left == right)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
else
{
_putchar('\n');
}
}
