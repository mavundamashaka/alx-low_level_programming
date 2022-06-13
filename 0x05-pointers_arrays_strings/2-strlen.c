#include "main.h"

/**
 * function: prototype
 * description: eturns the length of a string
 * @s: pointer to an string
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
