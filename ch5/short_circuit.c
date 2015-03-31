#include<stdio.h>

#define case1 0
#define case2 1 



int main(){ 
	
	int i = 0;
	int j = 0;

	/* ������ʹ���Д�ʽ�ĕr�����@���Ќ��˾���
	 * Side effect ���О飬Ҫ���]�� short circuit ������
	 * ��t Side effect ��һ���������е�����˕����
	 * ߉݋�ϵ��e�` 
	 */



#if case1
	/* case1 �K�����_�� ++j �@������İl�� */
	if ( i > 0 && ++j > 0 ){ 
		printf("execute if block\n");
	}
	printf("j = %d\n", j);

#endif 

#if case2	
	/* case2 ��춸������Д�ʽ�����ʹ�� ++j ��Ȼ���l��
	 * ��ʹif ( condition ) �е� condition �K������ 
	 */
	if ( ++j > 0 && i > 0 ){ 
		printf("execute if block\n");
	}
	printf("j = %d\n", j);

#endif
	return 0;

}
