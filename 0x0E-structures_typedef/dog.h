#ifndef DOG_H
#define DOG_H

/**
  *struct dog - new type struct dog.
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  *
  *Description: Details of a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - New name for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
