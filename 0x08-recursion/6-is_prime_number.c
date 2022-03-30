#include "main.h"
/**
 * is_prime - prime number
*@x: number
*@y: number
*Return: rusult 0 not prime 1 prime
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
/**
* is_prime_number - check if its a prime number
*@n: number to verify
*Return: result 0 not prime 1 prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
