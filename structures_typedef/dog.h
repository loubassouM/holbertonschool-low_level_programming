#ifndef DOG_H
#define DOG_H

/**
*struct dog - Defines a new struct for a dog
*@name: Name of the dog (string)
*@age: Age of the dog (float)
*@owner: Owner of the dog (string)
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

#endif
