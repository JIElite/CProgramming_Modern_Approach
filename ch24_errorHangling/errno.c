#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

/* errno 的型別：
 * int?  macro? 
 *
 * 
 * 使用 errno 檢查錯誤之前，要先清空成0
 * ex : 
 * 	errno = 0;
 */


int main(){ 
	/* 可以這樣放，但小心， errno = 0; 的位置不能亂放
	 * 可以嘗試放在if的前一行會有什麼事情發生？
	 */

	errno = 0;
	FILE *fp = fopen("filename", "r");
	if ( fp == NULL ){ 
		perror("file open");
	}
	
	/* BSD manual says that errno is a global variable */
	printf("%d\n", errno);

	/* 常用的處理錯誤function : perror();  		#include<stdio.h>
	 * 			    stderror();  	#include<string.h>
	 *
	 * 			    perror 會將錯誤訊息輸出到 stderr stream
	 * 			     void perror(const char *s);
	 * 			    
	 *   char *strerror(int errnum); 他回傳的是指向錯誤訊息的 pointer 
	 */

	/* strerror(errno) */
	char *str = strerror(errno);
	puts(str);
	 

	return 0;
}
