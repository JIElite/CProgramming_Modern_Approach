#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){ 

#if 0
	int c;
	switch(c){ 
		case 1: case 2 : case 3: case 4:
			/* 通常假如不要使用 break 而繼續執行 case 5
			 * 這種情況我們會用註解標示出來，因為在使用
			 * switch-case 的時候，這種情況是比較少見的
			 */
			
			/* FALL THROUGH */


		case 5: //statement
			break;

	}
#endif 



	srand(time(NULL));
	int time_of_loop = 10;
	int number = 0;
	int hit_case5 = 0;
	
	while ( time_of_loop-- ){ 
	
		int grade  = rand() % 5 + 1;

		switch(grade){ 
			/* 不知道為什麼課本要反順序寫 p.61 */
			case 4: case 3: case 2: case 1:
				number++;
			case 5:
				hit_case5++;
				break;
		}
	
		printf("grade : %d,  number : %d\n", grade, number);
	
	}
	return 0;
}
