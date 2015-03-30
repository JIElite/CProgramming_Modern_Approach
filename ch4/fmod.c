#if 0
 #include <math.h>

     double
     fmod(double x, double y);

     long double
     fmodl(long double x, long double y);

     float
     fmodf(float x, float y);


#endif 



#include<stdio.h>
#include<math.h>

int main(){ 

	double remaining = fmod(10.2324, 2.123);
	printf("remaining : %lf\n", remaining);

	
	return 0;
}
