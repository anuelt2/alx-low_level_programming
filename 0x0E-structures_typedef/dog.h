#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct called dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* init_dog function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog function prototype */
void print_dog(struct dog *d);

#endif
