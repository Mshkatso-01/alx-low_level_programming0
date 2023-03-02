/**
 *reverse_array - reverse contents of array
 *@array: the array parameter
 *@length: length of the array
 *Return: void
 */
void reverse_array(int *array, int length)
{
	int index = 0;
	int index2;
	int temp;
	
	index2 = length - 1;
	while (index < index2)
	{
		temp = array[index];
		array[index] = array[index2];
		array[index2] = temp;
		index += 1;
		index2 -= 1;
	}
}

