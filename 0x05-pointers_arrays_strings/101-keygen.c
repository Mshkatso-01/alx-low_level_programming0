#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main - generates random valid passwords
 *Return: Always 0
 */
int main(void)
{
	char k[200];
	int num = 0;
	int random = 0;
	char *key = k;

	srand(time(0));
	while(num < 2645)
	{
		random = rand() % 122;
		if(random > 32)
		{
			num += random;
			*key = random;
			key += 1;
		}
	}
	*key = 2772 - num;
	*(key + 1) = '\n';
	printf("%s", k);
	return 0;
}

