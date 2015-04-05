#include<stdio.h>


void function_name(){ 
	printf("%s calls\n", __func__);
	/* 使用 __func__ 會印出當前function 的名稱 */
	
	printf("%s returns\n", __func__);
}


int main(){ 
	function_name();
		
}
