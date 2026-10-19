#include "main.h"

/**
 * factorial - Calculates the factorial of an integer
 * @n: The number to calculate
 *
 * Return: The factorial, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
