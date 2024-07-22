#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: First parameter
 * @age: Second parameter
 * @owner: Third parameter
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, n, o;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n] != '\0'; n++)
		;
	n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
