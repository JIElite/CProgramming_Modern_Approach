#include<stdio.h>

/* ���x�� #include<> ֮ǰ */
#define NDEBUG
#include<assert.h>




int main(){ 
	
	int i = 0;
	while ( i < 100 ){ 
		/* assert Ҫ include<assert.h>
		 * �����M�� assert ( ) �����e��ėl���ĕr��
		 * �͕�call Abort()
		 *
		 * ����ʹ�� assert Ҳ��ʹ program ��Ч��׃��
		 * ����ͨ����� testing 
		 * 
		 * In release version, we will #define NDEBUG
		 * to unable assert.
		 *
		 * for example:
		 * 	#define NDEBUG
		 * 	#include<assert.h>
		 */
		assert( i < 10 ) ;
		printf("i : %d\n", i++);
	}

}
