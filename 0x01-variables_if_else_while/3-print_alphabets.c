#include <stdio.h>
/**
 * main - print part lowercase part uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char one;
	char two;

	one = 'a';
	two = 'A';
	while
		(one <= 'z') {
			putchar(one);
			one++;
		}
	while
		(two <= 'Z') {
			putchar(two);
			two++;
		}
	putchar('\n');
	return (0);
}

