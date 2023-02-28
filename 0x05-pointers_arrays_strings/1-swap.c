/**
 *swap_int - swap two integers
 *@a: Pointer to the integer to be swapped with a
 *@b: Pointer to the integer to be swapped with a
 *Return: void
 */
void swap_int(int* A, int* B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

