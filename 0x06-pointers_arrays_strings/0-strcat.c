/**
 *_strcat - concatenates two strings into the destination
 *@dest: destination string
 *@src: source string
 *Return: char* - destination string
 */
char *_strcat(char *dest, char *src)
{
	int index1 = 0;
	int index2 = 0;
	while (dest[index1])
	{
		index1 += 1;
	}
	do
	{
		dest[index1] = src[index2];
		index1 += 1;
		index2 += 1;
	} while (src[index2]);
	return (dest);
}

