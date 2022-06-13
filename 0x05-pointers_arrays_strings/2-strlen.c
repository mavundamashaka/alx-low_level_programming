#include "main.h"

/**
 * _strlen - Fucntion prototype
 * Description: Computes the length of a string
 * @s: pointer to a string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
