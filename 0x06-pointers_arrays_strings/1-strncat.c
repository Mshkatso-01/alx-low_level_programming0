/**
 *_strncpy - concatenate up to a limit
 *@dest: destination string
 *@src: source string
 *@n: limit
 *Return: char* - destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i += 1;
	}
	while (src[j] && (j < n))
	{
		dest[i + j] = src[j];
		j += 1;
	}
	dest[i + j] = '\0';
	return (dest);
}

