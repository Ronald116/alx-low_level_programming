#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints ftn to stdout
 * @c: input
 * Return: Always 1
 * On error, -1 and errno is set appropriatley
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

