/**
 *_strcat - concatenates two strings into the destination
 *@dest: destination string
 *@src: source string
 *Return: char* - destination string
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

