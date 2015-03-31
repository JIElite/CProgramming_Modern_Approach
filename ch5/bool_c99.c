#include<stdio.h>

int main(){ 
	
	/* _Bool 的型別是一個無號整數
	 * 這個型別是在 C99 才增加的
	 * 由 _Bool 定義的變數，其變數的 value 只有 0, 1 
	 * 兩種選擇，如果 assign 非0值則會以1 作為 assign
	 */
	_Bool flag1 = 5;
	_Bool flag2 = -1;	
	_Bool flag3 = 0;

	printf("flag1 = %u\n", flag1);
	printf("flag2 = %u\n", flag2);
	printf("flag3 = %u\n", flag3);

	return 0;
}
