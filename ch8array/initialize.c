/* c99 */

#include<stdio.h>

int main(){ 

	int arr[] = { 1, 2, 3, 4, [7] = 10, [23] = 5};
	
	printf("The sizeof arr : %zu\n", sizeof(arr));
	printf("There are %2zu elements in arr\n", sizeof(arr) / sizeof(arr[0]));


	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++){ 
		printf("i : %2d,  arr[%2d] : %2d\n", i, i, arr[i]);
	}



	/* C99 : Initializer for multi dimension array */
	int array[5][9] = { [0][0] = 7, [3][5] = 10};


	return 0;
}
