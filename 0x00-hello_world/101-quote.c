#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Should print string to stderr
 *
 * Return: always 1
 */
int main(void)
{
	char *quote = "and that piece of art is useful\"";
	char *aurthor = "Dora Korpar, 2015-10-19\n";
	char *message = quote + "-" + author;

	write(2, message, 59);
	return (1);
}