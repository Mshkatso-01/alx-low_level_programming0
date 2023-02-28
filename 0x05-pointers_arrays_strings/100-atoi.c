/**
 *_atoi - convert number in string to number
 *@string: string to be converted
 *Return: int - conversion result, or 0 if no numbers found
 */
int _atoi(char *string)
{
	int sign = 1;
	int result = 0;

	while (*string)
	{
		if (*string == '-')
		{
			sign *= -1;
		}
		else if ((*string >= '0') && (*string <= '9'))
		{
			result *= 10;
			result += (*string - '0') * sign;
		}
		else if (result)
		{
			break;
		}
		string += 1;
	}
	return (result);
}

