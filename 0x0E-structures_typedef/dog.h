#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - Data
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct of data about dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */
