/**
 *_strcpy - copy string to another buffer
 *@dest: destination string
 *@src: source string
 *Return: char* - dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index += 1;
	}
	dest[index] = '\0';
	return (dest);
}

