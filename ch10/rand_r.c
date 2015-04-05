#include<stdio.h>
#include<stdlib.h>


int main(){ 

	unsigned num = 10;
	int val = rand_r(&num);
	printf("val : %d, num : %u\n", val, num);
	
	val = rand_r(&num);
	printf("val : %d, num : %u\n", val, num);


	srand(10);
	printf("%d\n", rand());
	printf("%d\n", rand());
	

}
