#include "myFunctionsShell.h"
#include <stdlib.h>
#include <unistd.h>
char *inputFromUser()
{

    char ch;
    int len = 0;
    char *input = (char *)malloc(sizeof(char) * (len + 1));
    *input = '\0';
    while ((ch = getchar()) != '\n')
    {
        *(input + len) = ch;
        input = (char *)realloc(input, (++len + 1));
    }
    *(input + len + 1) = '\0';

    puts(input);

    return input;
}

void getLocation()
{

    char location[256];
    if (getcwd(location, sizeof(location)) == NULL){
        puts("Error");
        return;
    }
    printf("%s",location);
}