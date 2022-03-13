#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	const char *copie = str;
	int lungime = 0;
	while(*copie) 
	{
		lungime++;
		copie++;
	}
	return lungime;
}

int equality_check(const char *str, int poz1, int poz2)
{
	int x;
	x = (*(str + poz1) ^ *(str + poz2));
	return x;
}

int main(void)
{
	const char *str = "ababababaacccbacbacbacbacbac";
	int i = 0, len = my_strlen(str);
	printf("%d\n", my_strlen(str));
	
	for(i = 0; i < len; i++)
	{
		int add = i + (2 << i);
		add = add % len;
		//printf("%c %c\n", *(str+i), *(str+add));
		if(equality_check(str, i, add) == 0)
		{
			printf("Address of %c: %p\n", *(str + i), str + i);
		}
	}

	return 0;
}

