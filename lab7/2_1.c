
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int pid = fork();
    if (!pid)
        printf("Children PID: %d;\n  Parent PID: %d;\n", getpid(), getppid());
}