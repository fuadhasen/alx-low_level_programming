#ifndef DOG
#define DOG

/**
 * struct dog - structure name dog
 * @name: name
 * @age: age
 * @owner: owe
 *
 * Description: structure data type with name dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typdef struct dog dog_t
#endif /*DOG*/
