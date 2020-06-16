#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	pid_t child; // child process id
	printf("program start\n");
	child = fork();
	if(child == 0){ // child process
		sleep(2);
		printf("I am child!\n");
		//exit(0);
	}
	else if(child > 0){ // parent process  Q: then what is the main process?
		wait(0x0);
		printf("I am parent!\n");
		//wait(0x0);
	}
}
