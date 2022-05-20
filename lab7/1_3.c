#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    char **p;
    int cnt = 0;
    for (p = environ; *p != NULL && p - environ < 10; p++) /* перебор всех элементов массива */
        printf("%d: %s\n", p - environ, *p);
}