#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

	pid_t pid;
	pid = fork();
	
	if(pid == 0){
		printf("Child ID is: %d\n", getpid());

	} else { 
		sleep(13);
	}

	return 0;
}