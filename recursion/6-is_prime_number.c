#include "main.h"

/**
 * check_prime - Checks whether a number has a divisor
 * @n: The number to check
 * @divisor: The current divisor
 *
 * Return: 1 if prime, otherwise 0
 */
int check_prime(int n, int divisor)
{
	if (divisor > n / divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks whether an integer is prime
 * @n: The number to check
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, 2));
}
