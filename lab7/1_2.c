#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    char **p;
    int cnt = 0;
    for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
        cnt++;
    printf("Number of environment variables: %d;\nNumber of arguments: %d;\n", cnt, argc);
}