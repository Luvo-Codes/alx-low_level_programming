#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints 1 if character is uppercase. Prints 2 otherwise
 *
 * @c: the character to be checked
 *
 * Return: always 0.
 */
int _isupper(int c);

int main(void)
{
	char c;

	scnaf("%C", &c);
	if (_isupper(c))
	{
		printf("%c: %d\n", c, _isupper(c));
		return (1);
	}
	return (0);
}

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
