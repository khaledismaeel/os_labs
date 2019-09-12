#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int branch = fork();
    if (branch == 0)
        printf("Hello from child [PID - %d]\n", getpid());
    else
        printf("Hello from parent [PID - %d]\n", getpid());
    return 0;
}