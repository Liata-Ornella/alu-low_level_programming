#include "main.h"

/**
 * find_sqrt - Searches for the natural square root
 * @n: The number to check
 * @guess: The current possible square root
 *
 * Return: The natural square root, or -1
 */
int find_sqrt(int n, int guess)
{
	if (guess > n / guess)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root
 * @n: The number to check
 *
 * Return: The natural square root, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (find_sqrt(n, 1));
}
