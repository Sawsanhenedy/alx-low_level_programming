#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's basic information
 * @name: 1st mem
 * @age: 2nd mem
 * @owner: 3rd mem
 * Description: write and describe everything
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - type defenition for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
