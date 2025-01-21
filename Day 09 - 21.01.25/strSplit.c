#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[] = "    ls -l -s -u";
    puts(str);
    char* args[2];
    char *subStr = strtok(str, " ");
    args[0] = subStr;
    puts(subStr);
    puts(str);
    puts(str + 3);
    int i = 1;
    while ((subStr = strtok(NULL, " ")) != NULL)
    {
        args[i++] = subStr;
        puts(subStr);
    }

    return 0;
}
