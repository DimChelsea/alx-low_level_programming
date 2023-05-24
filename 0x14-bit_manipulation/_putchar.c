#include <unistd.h>

/**
 * Writes c chracter to stdout (standard output).
 * @c: character to be printed.
 *Return: on success 1
 *on failure , -1 is returned and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
