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
	char *result;

	result = dest;
	while (*dest)
	{
		dest += 1;
	}
	while (i < n)
	{
		dest[i] = src[i];
		if (!src[i])
		{
			break;
		}
		i += 1;
	}
	return (result);
}

