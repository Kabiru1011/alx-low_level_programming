#include "main.h"

/**
 * _isupper - checks for uppercase  characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase. 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '1')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
