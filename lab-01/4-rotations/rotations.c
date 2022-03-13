#include <stdio.h>

void rotate_left(int *number, int bits)
{
	unsigned int stanga, dreapta;
	stanga = (*number) << bits;
	dreapta = (*number) >> (sizeof(*number)*8 - bits);
	*number = stanga + dreapta;
}

void rotate_right(int *number, int bits)
{
	unsigned int stanga, dreapta;
	stanga = (*number) << (sizeof(*number)*8 - bits);
	dreapta = (*number) >> bits;
	*number = stanga + dreapta;
}

int main()
{
	/* TODO: Test functions */
	int number;
	number = 0x00000001;
	rotate_right(&number, 16);
	printf("%d\n", number);
	return 0;
}

