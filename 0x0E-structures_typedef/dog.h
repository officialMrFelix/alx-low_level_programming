#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: struct dog's member 1, name (char *)
 * @age: struct dog's member 2, age (float)
 * @owner: struct dog's member 3, owner (char *)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
