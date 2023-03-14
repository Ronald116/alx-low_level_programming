#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints to stdout
 * @c: input character
 * Return: On success 1
 * On eror, -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
