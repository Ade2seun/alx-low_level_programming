#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @C: is the int the will use the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
