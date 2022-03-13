#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	char *copie = s;
	char c;
	int len = 0;
	while(*copie)
	{
		copie++;
		len++;
	}
	copie = s;
	for(int i = 0; i < len/2; i++)
	{
		c = *(s + len - i - 1);
		*(s + len - i - 1) = *(s + i);
		*(s + i) = c;
	}
	s = copie;
}

int main()
{
	char *vector = malloc(50);
	strcpy(vector, "AnaAreMere");
	mirror(vector);
	printf("%s\n", vector);
	return 0;
}

