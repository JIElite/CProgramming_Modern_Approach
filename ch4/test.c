#include<stdio.h>

int main(){ 
	int i = 2;
	int j = i * i++; // 會造成未定義的行為
	int k = i * ++i;

	
	/* i think i = 4, j = 4, k = 12 */
	printf("i : %d\n"
	       "j : %d\n"
	       "k : %d\n", i, j, k);
	
	/*
	 * compiler :
	 * 	test.c:5:15: warning: unsequenced modification and access to 'i' [-Wunsequenced]
         * 		int j = i * i++;
         *       		~    ^
	 *	test.c:6:14: warning: unsequenced modification and access to 'i' [-Wunsequenced]
         *		int k = i * ++i;
         * 	        	~   ^
	 */


	return 0;

}
