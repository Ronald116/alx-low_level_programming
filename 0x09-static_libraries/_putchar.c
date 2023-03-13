#include <unistd.h>
/**
 * *_putchar -  writes funtion to stdout
 * @c: input character
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
