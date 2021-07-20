#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog type
 * @name: the doggo's name
 * @age: the doggo's time spent on this earth
 * @owner: the doggo's god
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};
/**
 * dog - typedef for dog
 */
typedef struct dog dog;
#endif /* DOG_H */
