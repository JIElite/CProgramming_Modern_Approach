#include<stdio.h>

#define case1 0
#define case2 1 



int main(){ 
	
	int i = 0;
	int j = 0;

	/* 假如在使用判斷式的時候，在這當中寫了具有
	 * Side effect 的行為，要考慮到 short circuit 的特性
	 * 否則 Side effect 不一定會被執行到。因此會造成
	 * 邏輯上的錯誤 
	 */



#if case1
	/* case1 並不會確保 ++j 這件事情的發生 */
	if ( i > 0 && ++j > 0 ){ 
		printf("execute if block\n");
	}
	printf("j = %d\n", j);

#endif 

#if case2	
	/* case2 由於更改了判斷式的順序，使得 ++j 必然會發生
	 * 即使if ( condition ) 中的 condition 並不成立 
	 */
	if ( ++j > 0 && i > 0 ){ 
		printf("execute if block\n");
	}
	printf("j = %d\n", j);

#endif
	return 0;

}
