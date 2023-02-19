#include <stdio.h>
/**
 * main - prints the lowercase alphabet in revers.
 * Return: Always =0.
 */
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);

}


