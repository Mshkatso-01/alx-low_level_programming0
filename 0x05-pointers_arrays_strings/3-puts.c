#include"main.h"

void _puts(char* String)
{
	while(*String)
	{
		_putchar(*String);
		String += 1;
	}
}

