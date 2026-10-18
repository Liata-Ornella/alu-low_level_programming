#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
