#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calcula largo strigs
 * @s: s
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copia strings
 * @dest: destino
 * @src: src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	}
/**
 * new_dog - new dog
 * nuevo_dog - el nuevo can pa
 * @name: name
 * @age: age
 * @owner: onwer
 * Return: nuevo_dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo_dog;

	nuevo_dog = malloc(sizeof(dog_t));

	if (nuevo_dog == NULL)
	{
		return (NULL);
	}
	nuevo_dog->name = malloc(_strlen(name) + 1);
	if (nuevo_dog->name == NULL)
	{
		free(nuevo_dog);
		return (NULL);
	}
	_strcpy(nuevo_dog->name, name);

	nuevo_dog->owner = malloc(_strlen(owner) + 1);

	if (nuevo_dog->owner == NULL)
	{
		free(nuevo_dog->name);
		free(nuevo_dog);
		return (NULL);
	}
	_strcpy(nuevo_dog->owner, owner);

	nuevo_dog->age = age;

	return (nuevo_dog);
}
