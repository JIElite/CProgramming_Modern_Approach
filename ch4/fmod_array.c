#if 0
  #include <Accelerate/Accelerate.h>

     vFloat vfmodf(vFloat x, vFloat y);
     void vvfmodf(float *z, const float *y, const float *x, const int *n);
     void vvfmod(double *z, const double *y, const double *x, const int *n);
#endif



#include<stdio.h>
#include<Accelerate/Accelerate.h>


void show_remaining(const double *arr, int size){ 
	int i;
	for ( i = 0; i < size; i++){ 
		printf("remaining : %lf\n", arr[i]);
	}
}


int main(){ 
	
	double double_arr[3];
	double double_n1 [3] = { 3.21, 412.5, 35.0 };
	double double_n2 [3] = { 1.06, 100.0, 7.0 };
	const int num = 3;

	vvfmod(double_arr, double_n1, double_n2, &num);
	show_remaining(double_arr, num);	
	

	return 0;
}
