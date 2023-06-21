#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints base10 single digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar("%d", i);
	putchar('\n');
	return (0);
}
