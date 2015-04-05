#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


void *getRandData(void *str){ 
	
	FILE *fout = fopen((char *)str, "w");

	for (int i = 0; i < 20; i++){ 
		int val = rand();
		fprintf(fout, "%d\n", rand());
	}

	fclose(fout);
	pthread_exit(NULL);

}



int main(){ 
	
	pthread_t tid[5];
	char *filename[5] = { "out1", "out2", "out3", "out4", "out5"};

	for(int i = 0; i < 5; i++){ 
		printf("%s\n", filename[i]);
		pthread_create(&tid[i], NULL, getRandData, (void *)filename[i]);
	}

	for (int i = 0; i < 5; i++){ 
		pthread_join(tid[i], NULL);
	}
	return 0;
}
