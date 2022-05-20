#include <stdio.h>
#include <stdlib.h>

extern char **environ;
int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        printf("Invalid argument count.\n");
        return -1;
    }
    char **p;
    int num = atoi(argv[1]);
    for (p = environ; *p != NULL && p - environ < num; ++p)
        printf("%d: %s\n", p - environ, *p);
}