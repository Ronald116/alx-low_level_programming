#include <stdio.h>
/**
 * main - numbers in base sixteen
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;

	a = 'a';
	b = '0';
	while
		(b < 10) {
			putchar((b % 10) + '0');
			b++;
		}
	while
		(a <= 'f') {
			putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}

