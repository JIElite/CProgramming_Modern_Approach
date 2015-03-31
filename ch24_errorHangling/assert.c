#include<stdio.h>

/* 定義在 #include<> 之前 */
#define NDEBUG
#include<assert.h>




int main(){ 
	
	int i = 0;
	while ( i < 100 ){ 
		/* assert 要 include<assert.h>
		 * 當不滿足 assert ( ) 參數裡面的條件的時候，
		 * 就會call Abort()
		 *
		 * 但是使用 assert 也會使 program 的效率變低
		 * 所以通常用於 testing 
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
