#include<stdio.h>

int main(){ 
	
	/* _Bool ���̈́e��һ���o̖����
	 * �@���̈́e���� C99 �����ӵ�
	 * �� _Bool ���x��׃������׃���� value ֻ�� 0, 1 
	 * �ɷN�x����� assign ��0ֵ�t����1 ���� assign
	 */
	_Bool flag1 = 5;
	_Bool flag2 = -1;	
	_Bool flag3 = 0;

	printf("flag1 = %u\n", flag1);
	printf("flag2 = %u\n", flag2);
	printf("flag3 = %u\n", flag3);

	return 0;
}
