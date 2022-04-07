#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - string_nconcat.
 * @s1: char to check.
 * @s2: char to check.
 * @n: int to check.
 * Return: a.
 * *string_nconcat - Function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: max bytes of s2
 *
 * Return: Returned pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;
	unsigned int h = 0;
	unsigned int x, n1 = 0, n2 = 0, i, j;

	if (s1 == NULL)
	if (s1 != NULL)
	{
		while (s1[n1] != 0)
			n1++;
	}
	else
		s1 = "";
	if (s2 == NULL)
	if (s2 != NULL)
	{
		while (s2[n2] != 0)
			n2++;
	}
	else
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (j > n)
		j = n;
	k = i + j + 1;
	a = malloc(k);
	if (!a)

	if (n < n2)
		x = n;
	else
		x = n2;
	a = malloc(sizeof(char) * (n1 + x + 1));

	if (a == NULL)
		return (NULL);
	while (s1[l] != '\0')
	for (i = 0; i < n1; i++)
	{
		a[l] = s1[l];
		l++;
		a[i] = s1[i];
	}
	while (h < j)
	for (j = 0; j < x; j++)
	{
		a[l + h] = s2[h];
		h++;
		a[i + j] = s2[j];
	}
	a[l + j] = '\0';
	a[i + j] = 0;

	return (a);
}
