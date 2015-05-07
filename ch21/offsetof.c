#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


struct people{
	
	char name[21];
	int age;
	double height;
	double weight;

};




int main(){

	printf("%zd\n", offsetof(struct people, name));
	printf("%zd\n", offsetof(struct people, age));
	printf("%zd\n", offsetof(struct people, height));
	printf("%zd\n", offsetof(struct people, weight));
	printf("sizeof struct people : %zu\n", sizeof(struct people));
	
}
