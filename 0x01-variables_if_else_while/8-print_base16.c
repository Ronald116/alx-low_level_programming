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
		(b <= 'f') {
			putchar(b);
			b++;
		}
	while
		(a < 10) {
			putchar(a + '0');
			a++;
		}
	putchar('\n');
	return (0);
}

