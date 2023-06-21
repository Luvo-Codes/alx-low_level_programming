#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	putchar('\n');
	return (0);
}
