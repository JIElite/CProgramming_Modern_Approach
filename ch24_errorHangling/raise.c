/* This is the example in C programming Modern Approach
 * p.451
 */


#include<stdio.h>
#include<signal.h>

void handler(int sig);
void raise_sig(void);

int main(void){ 

	void (*origin_handler)(int);

	printf("Installing handler\n");
	origin_handler = signal(SIGINT, handler);
	raise_sig();

	printf("Changing handler to SIG_IGN\n");
	signal(SIGINT, SIG_IGN);
	raise_sig();

	printf("Restoring orginal handler\n");
	signal(SIGINT, handler);
	raise_sig();

	printf("Program terminates normally\n");

	

	return 0;
}


void handler(int sig){ 
	printf("Handler called for signal : %d\n", sig);
}

void raise_sig(void){ 
	raise(SIGINT);
}
