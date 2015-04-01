#include<stdio.h>


int main(){ 
	int a[] = { 4, 9, 1, 8, [0] = 5, 7};

	size_t len = sizeof(a) / sizeof(a[0]);
	printf("len : %zu\n", len);
	
	for ( int i = 0; i < len; i++){ 
		printf("a[%d] : %d\n", i, a[i]);
	}

	return 0;
}
