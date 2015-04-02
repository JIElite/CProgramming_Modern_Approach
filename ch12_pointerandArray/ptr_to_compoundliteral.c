#include<stdio.h>

int main(){ 

	/* Ïà®”ì¶£º
	 * int arr[] = { 3, 0, 3, 4, 1};
	 * int *p = &a[0]
	 */


	int *p = (int []){ 3, 0, 3, 4, 1};

	for(int i = 0; i < 5; i++){ 
		printf("%d\n", *p++);
	}
	
	return 0;
}
