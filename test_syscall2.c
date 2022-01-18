#include <linux/unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>
#define __NR_print_other 339

int main(int argc, char *argv[]) {
	int pid;
	
	printf("Enter a PID (process id) as an integer: ");
	scanf("%d", &pid);
	printf("The process submitted was: %d\n", pid);
	
	if (kill(pid, 0) == 0) 
	{
		syscall(__NR_print_other, pid);
	}
	else
	{
		printf("The process id %d was not running", pid);
	}
	return 0;

}
