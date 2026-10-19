
#include <stdlib.h>
#include "dog.h"

/**
 * string_length - Gets the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
static unsigned int string_length(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * copy_string - Copies a string into allocated memory
 * @str: The source string
 *
 * Return: Pointer to the copy, or NULL on failure
 */
static char *copy_string(char *str)
{
	unsigned int length;
	unsigned int i;
	char *copy;

	length = string_length(str);
	copy = malloc(length + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = copy_string(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = copy_string(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
