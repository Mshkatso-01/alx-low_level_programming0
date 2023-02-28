#include"main.h"

int StringLength(char* String)
{
	int Result = 0;
	while(*String)
	{
		Result += 1;
		String += 1;
	}
	return Result;
}

void print_rev(char* String)
{
	int Index = StringLength(String) - 1;
	while(Index >= 0)
	{
		_putchar(String[Index]);
		Index -= 1;
	}
}

