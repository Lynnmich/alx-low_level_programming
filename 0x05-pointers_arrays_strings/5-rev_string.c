#include "main.h"
/**
*rev_string - function
*
*@s: pointer of parameter
*/
void rev_string(char *s)
{
char temp;
int length = 0;
int b = 0;
int d;

while (s[length] != '\0')
length++;
d = length - 1;
length /= 2;
while (length--)
{
temp = s[b];
s[b] = s[d];
s[d] = temp;
b++;
d++;
}
}
