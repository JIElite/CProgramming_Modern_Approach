#include<stdio.h>

int main(){ 

	double d_num = 1024342.34223;
	int i_num = 100;
	

	printf("d_num : %g\n", d_num);
	
	/* 
	 *	conversion_sp.c:17:25: warning: format specifies type 'double' but the argument has type 'int' [-Wformat]
         *		printf("i_num : %g\n", i_num);
         *        		        ~~     ^~~~~
         *               		%d 
	 */
	printf("i_num : %g\n", i_num);
	printf("i_num : %g\n", (double)i_num);


	return 0;
}
