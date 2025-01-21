#include "myFunctionsShell.h"

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

    return input;
}
// [l,s, ,-,l, ,-,s, ,-,u,\0]
// [l,s,\0,-,l,\0,-,s,\0,-,u,\0]
//[input,input+3,input+6,input+9, NULL]
//"ls\0-l\0-s\0-u\0"
//["ls", "-l", "-s" ,"-u",NULL]

// [ , , , , ,l,s, ,-,l, ,-,s, ,-,u,\0]
// [\0,\0,\0,\0,\0,l,s, ,-,l, ,-,s, ,-,u,\0]
//[input+5,input+8,input+1,input+14, NULL]
//"ls\0-l\0-s\0-u\0"
//["ls", "-l", "-s" ,"-u",NULL]
char **splitArguments(char *input)
{
    //[ADDRESS,ADDRESS,]

    char **arguments = (char **)malloc(sizeof(char *) * 7);
    arguments[0] = input;
    arguments[1] = input + 4;
    arguments[2] = input + 7;
}

void getLocation()
{
    char location[256];
    if (getcwd(location, sizeof(location)) == NULL)
    {
        puts("Error");
        return;
    }
    printf("%s", location);
}

void logout(char *input)
{

    free(input);
    puts("logout");
    exit(EXIT_SUCCESS);
}

void systemCall(char **arguments)
{
    puts("systemCall");
    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork err");
        return;
    }

    if (pid == 0)
    {

        if (execvp(arguments[0], arguments) == -1)
        {
            exit(EXIT_FAILURE);
        }
    }
}
void myPipe(char **argv1, char **argv2)
{

    int fd[2];

    if (fork() == 0)
    {
        pipe(fd);
        if (fork() == 0)
        {

            close(STDOUT_FILENO);
            dup2(fd[1], STDOUT_FILENO);
            close(fd[1]);
            close(fd[0]);
            execvp(argv1[0], argv1);
        }

        close(STDIN_FILENO);
        dup(fd[0]);
        close(fd[1]);
        close(fd[0]);
        execvp(argv2[0], argv2);
        
    }
}