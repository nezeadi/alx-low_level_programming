#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * struct dog_t - a new type of dog
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
