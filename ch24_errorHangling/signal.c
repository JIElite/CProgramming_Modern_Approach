#include<stdio.h>
#include<signal.h>
#include<errno.h>


int main(){ 


	/* p.450
	 * 下面的程式碼可以用來檢測 handler 是否可以傳入 signal 
	 * 作為一個 處理 signal 的 function 
	 */

#if SIGNAL	
	errno = 0;
	if ( signal(SIGINT, handler) == SIG_ERR ){ 
		perror("signal(SIGINT, handler) failed");
	}
#endif

	return 0;
}
