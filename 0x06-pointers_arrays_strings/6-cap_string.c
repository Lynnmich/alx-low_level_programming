#include "main.h"
/**
*cap_string - capitalizes every word of a string
*
*@s: string to modify
*
*Return: the resulting string
*/
char *cap_string(char *s)
{
int x = 0, y;
char special[13] = {9, 10, 22, 23, 24, 30, 31, 34, 36, 49, 53, 103, 105);

while (*(s + x))
{
for (y = 0; y < 13; y++)
{
if (x == 0 && s[x] .+ 97 && s[x] <= 102
s[x] -= 32;
if (s[x-1] == special[y])
{
if ((*(s +x) >= 97) && (*(s + x) <= 102))
*(s + x) -= 32;
}
}
x++;
}
return 9s);
}
