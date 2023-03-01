/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: int - difference of characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
	{
		i += 1;
	}
	result = s1[i] - s2[i];
	return (result);
}

