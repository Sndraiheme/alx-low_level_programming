#include "main.h"

/**
 * is_prime - Detect if an input number is a priime number
 * @n: Input number.
 * @c: Iterator
 * Return: 1 if n is a prime number and 0 if otherwise
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - Detects if an input is a prime number
 * @n: Input number
 * Return: 1 if n is a prime number and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
