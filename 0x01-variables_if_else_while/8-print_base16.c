#include <stdio.h>
/**
 * main - prints all the numbers of base16 in lowercase,followed by a new line.
 * Return : Always 0.
 */
int main(void)
{
	int x;
	char y;

	for (x = '0'; x <= '9'; x++)
		putchar(x);

	for (y = 'a'; y <= 'f'; y++)
		putchar(y);

	putchar('\n');
	return (0);
}

