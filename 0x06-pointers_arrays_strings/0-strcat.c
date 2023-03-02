#include"main.h"

/**
 *_strcat - concatenates two strings into the destination and adds a null-terminator
 *@dest: destination string
 *@src: source string
 *Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	char *result;
	
	result = dest;
	while (*dest)
	{
		dest += 1;
	}
	while (src[index])
	{
		dest[index] = src[index];
		index += 1;
	}
	dest[index] = '\0';
	return (result);
}

