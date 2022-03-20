#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char *delete_first(char *s, char *pattern)
{
	int i, j, ok, ct = 0, poz = -1;
	int ls = my_strlen(s), lp = my_strlen(pattern);
	char *new = malloc(ls * sizeof(s));
	for(i = 0; i < ls; i++)
	{
		ct = 0;
		for(j = 0; j < lp; j++) if(*(s + i + j) == *(pattern + j)) ct++;
		if(ct == lp && poz == -1) poz = i;
	}
	for(i = 0; i < poz; i++) *(new + i) = *(s + i);
	for(i = poz; i < ls - lp; i++) *(new + i) = *(s + i + lp);
	*(new + i) = '\0';

	return new;
}

int main(){
	char *s = "Ana arrae mere multe";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n",delete_first(s, pattern));

	return 0;
}
