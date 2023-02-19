#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char t;
	for(t = 'a' ; t <= 'z' ; t++)
	{
		putchar(t);
		if(t == 'c' || t == 'y' || t == 'o')
			continue;
	}

	putchar('\n');

	return 0;







}
