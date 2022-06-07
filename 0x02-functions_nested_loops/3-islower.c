#include "main.h"



/**
 * function prototype: _islower
 * description: validates if charecter is lowercase
 * Return : 1 if charecter is lowercase otherwise 0
 */

int _islower(int c)
{
	int result = c >= 97 && c <= 122 ? 1 : 0;

	return (result);
}
