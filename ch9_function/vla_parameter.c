#include<stdio.h>


/*
Users/jielite/C_note/C_Modern_Approach/ch9_function/vla_parameter.c:4:15: error: use of undeclared identifier 'n'
void f1(int a[n], int n){
              ^
1 error generated.

shell returned 1
*/

void f1(int a[n], int n){ 
	printf("call f1 : \n");
	
	for (int i = 0; i < n; i++){ 
		printf("%d\n", a[i]);
	}

	return;
}

void f2(int a[], int n){ 

	printf("call f2 : \n");

	for (int i = 0; i < n; i++){ 
		printf("%d\n", a[i]);
	}

	return;
}


void f3(int n, int a[n]){ 
	
	printf("call f3 : \n");

	for (int i = 0; i < n; i++){ 
		printf("%d\n", a[i]);
	}

	return;
}



int main(){ 

	int arr[] = { 2, 4, 4, 5, 6};
	f1((int [4]){ 0, 2, 3, 4}, 4);
	f2((int []){ 1, 3 ,5}, 3);
	f3(5, arr);

	return 0;
}
