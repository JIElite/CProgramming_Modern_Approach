#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){ 

#if 0
	int c;
	switch(c){ 
		case 1: case 2 : case 3: case 4:
			/* ͨ�����粻Ҫʹ�� break ���^�m���� case 5
			 * �@�N��r�҂������]���ʾ���������ʹ��
			 * switch-case �ĕr���@�N��r�Ǳ��^��Ҋ��
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
			/* ��֪����ʲ�N�n��Ҫ����� p.61 */
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
