#include "dog.h"
#include <stdlib.h>

/**
 * _length - function to return the length of a string
 * @string: the string wee gonna work with
 * Return: the length
 */

int _length(char *string)
{
	int n = 0;

	while (string[n])
		n++;
	return (n);
}
/**
 * _copypaste - to copy a string
 * @copy: first string
 * @dest: second string
 */

void _copypaste(char *dest, char *copy)
{
	int length, index;

	length = _length(copy);
	for (index = 0; index < length; index++)
		dest[index] = copy[index];
	dest[index] = '\0';
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	int size1, size2;

	if (!d)
		return (NULL);

	size1 = _length(d->name);
	size2 = _length(d->owner);
	d->name = malloc(sizeof(char) * (size1 + 1));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (size2 + 1));
	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_copypaste(d->name, name);
	_copypaste(d->owner, owner);
	d->age = age;

	return (d);
}
