#include "main.h"
/**
 * maiin - print "_putchar, followed by a new line.
 * Description: not alllowed to include standard libraries.
 * Return: 0.
 */
int main(void)
{
	char xn[] = "_putchar";
	int y = 0;
	while (xn[y] != '\0')
	{
		_putchar(xn[y]);
		y++;
	}
	_putchar('\n');
	return (0);
}































