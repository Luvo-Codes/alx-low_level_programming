#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * _putchar - prints out a character to stdout
 * @c: The characted to be written
 * Return: 0 on success and -1 if there are any errors
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
