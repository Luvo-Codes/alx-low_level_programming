#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

		for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
