#include<stdio.h>


int main(){ 


	int n = 0;
	int sum = 0;
	int i;


	/* while loop �� i == 0 ����r�£�������n���� */
	while ( n < 10 ) { 
	
		scanf("%d", &i);
		if ( i == 0 ) 
			continue;
		sum += i;
		n++;
	}


	/* ����������� for loop ���� n++ */
	sum = 0;
	for ( n = 0; n < 10; n++){ 
		scanf("%d", &i);
		if ( i == 0 )
			continue;
		sum += i;

	}

}
