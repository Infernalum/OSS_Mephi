#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int pid = fork();
    for (int i = 0; i < 1000; ++i)
        if (pid)
            fork();

    sleep(5);
}