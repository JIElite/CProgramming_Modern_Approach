#include<stdio.h>


void function_name(){ 
	printf("%s calls\n", __func__);
	/* ʹ�� __func__ ��ӡ����ǰfunction �����Q */
	
	printf("%s returns\n", __func__);
}


int main(){ 
	function_name();
		
}
