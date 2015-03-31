#include<stdio.h>
#include<stdbool.h>

int main(){ 
	
	/* _Bool 的型別是一個無號整數
	 * 這個型別是在 C99 才增加的
	 * 由 _Bool 定義的變數，其變數的 value 只有 0, 1 
	 * 兩種選擇，如果 assign 非0值則會以1 作為 assign
	 */
	_Bool flag1 = 5;
	_Bool flag2 = -1;	
	_Bool flag3 = 0;

	/* 要使用下列這種 type 需要 #include<stdbool.h> 
	 *
	 * 但是要注意，如果在其他地方以經 define bool 這樣的字，
	 * 會出現編譯錯誤
	 */

	bool flag4 = 5;
	bool flag5 = -1;
	bool flag6 = 0;

	printf("flag1 = %u\n", flag1);
	printf("flag2 = %u\n", flag2);
	printf("flag3 = %u\n", flag3);

	printf("flag4 = %u\n", flag4);
	printf("flag5 = %u\n", flag5);
	printf("flag6 = %u\n", flag6);


	return 0;
}
