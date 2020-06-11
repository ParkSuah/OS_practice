#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	pid_t child;
	printf("program start\n");
	child = fork();
	if(child == 0){
		sleep(2);
		printf("I am child!\n");
		//exit(0);
	}
	else if(child > 0){
		wait(0x0);
		printf("I am parent!\n");
		//wait(0x0);
	}
}
