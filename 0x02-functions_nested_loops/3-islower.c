#include "main.h"

/**
 * _islower - is where the function task resides
 * Description: a function that checks for lowercase character
 * @c:character to check if it islowercase
 * Return: 1-if lowercase, 0-if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}