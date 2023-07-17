#include <stdlib.h>
#include "dog.h"

/**
*_strlen - returns the length of a string
*
*@str: string to calculate
*
*Return: the length of the string
*/

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
*_strcpy - copies the string pointed to by src
*
*including the terminating null byte (\0)
*
*to the buffer pointed to by dest
*
*@dest: pointer to the buffer in which we copy the string
*
*@src: string to be copied
*
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, m = 0;

	while (src[m] != '\0')
		m++;
	for (i = 0; i < m; i++)
		dest[i] = src[i];
	dest[i] = ('\0');

	return (dest);
}
/**
*new_dog - creates a new dog
*
*@name: name of the dog
*
*@age: age of the dog
*
*@owner: owner of the dog
*
*Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
