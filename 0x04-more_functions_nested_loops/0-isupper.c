#include <stdio.h>
/**
 * _isupper - checks if a character is upper or lowercase
 *
 * @c: the character to be checked
 *
 * Return: returns 1 for uppercase, 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
