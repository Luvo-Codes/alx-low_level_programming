#include <stdio.h>
/**
 * _isdigit - checks if a character is a digit or not
 *
 * @c: the character to be checked
 *
 * Return: returns 1 if character is a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
