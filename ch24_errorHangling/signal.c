#include<stdio.h>
#include<signal.h>
#include<errno.h>


int main(){ 


	/* p.450
	 * ����ĳ�ʽ�a�����Á�z�y handler �Ƿ���Ԃ��� signal 
	 * ����һ�� ̎�� signal �� function 
	 */

#if SIGNAL	
	errno = 0;
	if ( signal(SIGINT, handler) == SIG_ERR ){ 
		perror("signal(SIGINT, handler) failed");
	}
#endif

	return 0;
}
