#include<stdio.h>


int main(){ 


	int n = 0;
	int sum = 0;
	int i;


	/* while loop 在 i == 0 的情況下，不會將n增加 */
	while ( n < 10 ) { 
	
		scanf("%d", &i);
		if ( i == 0 ) 
			continue;
		sum += i;
		n++;
	}


	/* 但是在下面的 for loop 會將 n++ */
	sum = 0;
	for ( n = 0; n < 10; n++){ 
		scanf("%d", &i);
		if ( i == 0 )
			continue;
		sum += i;

	}

}
