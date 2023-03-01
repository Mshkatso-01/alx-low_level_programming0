/**
 *_strncpy - copy string up to a limit
 *@dest: destination string
 *@src: source string
 *@n: limit
 *Return: char* - destinaion string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i += 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i += 1;
	}
	return (dest);
}

