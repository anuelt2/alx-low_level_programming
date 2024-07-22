#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct called dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* init_dog function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog function prototype */
void print_dog(struct dog *d);

#endif
