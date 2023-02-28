#include"main.h"

void puts2(char* String)
{
	int Index = 0;
	while(String[Index])
	{
		if(Index % 2 == 0)
		{
			_putchar(String[Index]);
		}
		Index += 1;
	}
	_putchar('\n');
}

