#include"main.h"

/**
 *puts2 - prints every other character of a string
 *@string: pointer to the string
 *Return: void
 */
void puts2(char *string)
{
	int index = 0;

	while (string[index])
	{
		if(index % 2 == 0)
		{
			_putchar(string[index]);
		}
		index += 1;
	}
	_putchar('\n');
}

