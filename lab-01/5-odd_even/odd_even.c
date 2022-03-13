#include <stdio.h>
#include <stdlib.h>

void print_binary(int number, int nr_bits)
{
	int *bits = malloc(nr_bits * sizeof(int));
	printf("0b");
	for(int i = 0; i < nr_bits; i++)
	{
		*(bits + i) = number & 1;
		number >>= 1;
	}
	for(int i = nr_bits - 1; i >= 0; i--) printf("%d", *(bits + i));
	printf("\n");
}

void check_parity(int *numbers, int n)
{
	for(int i = 0; i < n; i++)
	{
		if(*(numbers + i) & 1) printf("0x%08x\n", *(numbers + i));
			else print_binary(*(numbers + i), 8);
	}
	
}

int main()
{
	int *numbers, n;
	scanf("%d", &n);
	numbers = malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) scanf("%d", numbers + i);
	check_parity(numbers, n);
}

