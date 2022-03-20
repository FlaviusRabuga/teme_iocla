#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void *find_max(void *arr, int n, int element_size, 
				int (*compare)(const void *, const void *)) {
	void *max_elem = arr;
	void *cur_element;
	for(int i = 0; i < n; i++) 
	{
		void *cur_element = (char *)arr + i * element_size;
		if(compare(cur_element, max_elem)) *((int *)max_elem) = *((int *)cur_element);
	}
	return max_elem;
}

int compare(const void *a, const void *b)
{
	if(*((int*)a) > *((int *)b)) return 1;
		else return 0;
}
int main() {
	int n;
	const void *a, *b;
	scanf("%d", &n);

	int *arr = malloc(n * sizeof(*arr));

	for (int i = 0 ; i < n; ++i)
		scanf("%d", &arr[i]);      

	void *rez = find_max(arr, n, sizeof(*arr), compare);
	printf("%d\n", *((int *)rez));
	
	free(arr);
	return 0;
}
