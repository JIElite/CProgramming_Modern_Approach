#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

/* errno ���̈́e��
 * int?  macro? 
 *
 * 
 * ʹ�� errno �z���e�`֮ǰ��Ҫ����ճ�0
 * ex : 
 * 	errno = 0;
 */


int main(){ 
	/* �����@�ӷţ���С�ģ� errno = 0; ��λ�ò��܁y��
	 * ���ԇLԇ����if��ǰһ�Е���ʲ�N����l����
	 */

	errno = 0;
	FILE *fp = fopen("filename", "r");
	if ( fp == NULL ){ 
		perror("file open");
	}
	
	/* BSD manual says that errno is a global variable */
	printf("%d\n", errno);

	/* ���õ�̎���e�`function : perror();  		#include<stdio.h>
	 * 			    stderror();  	#include<string.h>
	 *
	 * 			    perror �����e�`ӍϢݔ���� stderr stream
	 * 			     void perror(const char *s);
	 * 			    
	 *   char *strerror(int errnum); ���؂�����ָ���e�`ӍϢ�� pointer 
	 */

	/* strerror(errno) */
	char *str = strerror(errno);
	puts(str);
	 

	return 0;
}
